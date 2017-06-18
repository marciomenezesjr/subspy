/*
 * rfm69Gateway.c
 *
 *  Created on: 27.05.2017
 *      Author: marcio
 */

// Includes
#include "rfm69Gateway.h"

// Local methods
static void gatewayActiveListen(void);
static void gatewayForwardMsg(uint8_t *buffer, uint8_t size);

uint8_t cmdBuffer[CMD_BUF_SIZE] = "";
volatile uint8_t bCDCDataReceived_event = FALSE;
volatile bool spyEnable = FALSE;

volatile spyConfiguration_t devConfig;

void gatewayInit(void){
    rfm69Initialize(FREQUENCY, NODEID, NETWORKID);
    rfm69Promiscuous(true);
    rfm69SetPowerLevel(RADIOPOWERLEVEL);
    rfm69Encrypt(ENCRYPTKEY);
    devConfig.listenTimeout = LISTENTIMEOUT;                        // TODO: load these parameters from flash, so they are persistent
    devConfig.sweepActive = SWEEPACTIVE;                            // TODO: add random sleep times to avoid sync blackout
    devConfig.sweepPeriod = 0;
}

void gatewayPassiveListen(void){
    rfm69ReceiveDone();
    wakeMeUpAt = sysGetGTime() + devConfig.sweepActive;
    __bis_SR_register(LPM0_bits + GIE);
    if(pinInterrupt == true){
        rfm69InterruptHandler();
        if(rfm69Stats.dataAvailable){
            gatewayForwardMsg(rfm69Stats.data, rfm69Stats.dataLen);
        }
        gatewayActiveListen();
    }
    if(devConfig.sweepPeriod != 0){
        rfm69Sleep();
    }
}

void gatewayReceiveCmd(void){
    if(bCDCDataReceived_event){
        bCDCDataReceived_event = FALSE;
        USBCDC_receiveDataInBuffer(cmdBuffer, CMD_BUF_SIZE, CDC0_INTFNUM);

        switch(cmdBuffer[0]){
            case DEVPASSWD:
                devConfig.sweepPeriod = cmdBuffer[1]*1000;
                devConfig.sweepActive = (devConfig.sweepPeriod * cmdBuffer[2])/100;
                devConfig.sweepPeriod -= devConfig.sweepActive;
                break;
            case ENABLE_DEVICE:
                spyEnable = TRUE;
                rfm69SetMode(RF69_MODE_RX);
                break;

            case DISABLE_DEVICE:
                spyEnable = FALSE;
                rfm69Sleep();
                break;
        }
    }
}

static void gatewayActiveListen(void){
    uint32_t timeout;
    timeout = sysGetGTime();
    wakeMeUpAt = timeout + devConfig.listenTimeout;
    while((sysGetGTime() - timeout) < devConfig.listenTimeout){
        __bis_SR_register(LPM0_bits + GIE);
        if(pinInterrupt == true){
            rfm69InterruptHandler();
            if(rfm69Stats.dataAvailable){
                gatewayForwardMsg(rfm69Stats.data, rfm69Stats.dataLen);
            }
            timeout = sysGetGTime();                                // timeout is renewed whenever a packet is received
            wakeMeUpAt = timeout + devConfig.listenTimeout;
        }
        gatewayReceiveCmd();
    }
}

// This function begins the USB send operation, and immediately
// returns, while the sending happens in the background.
// Send timeStr, 9 bytes, to intf #0 (which is enumerated as a
// COM port).  1000 retries.  (Retries will be attempted if the
// previous send hasn't completed yet).  If the bus isn't present,
// it simply returns and does nothing.
static void gatewayForwardMsg(uint8_t *buffer, uint8_t size){
    if(USBCDC_sendDataInBackground(buffer, size, CDC0_INTFNUM, 1000)){
        __no_operation();          // If it fails, it'll end up here.  Could happen if
                                   // the cable was detached after the connectionState()
    }
}


