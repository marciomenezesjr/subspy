#include "rfm69.h"
#include "peripheralAccess.h"
#include "systemToolbox.h"
#include "rfm69Gateway.h"

/*
 * main.c
 */

uint64_t time = 0;

uint16_t diff = 0;
uint32_t dummy = 0;
volatile uint32_t clock = 0;

void main(void) {
    sysInit();
    gatewayInit();

    while(1){
        wakeMeUpAt = sysGetGTime() + devConfig.sweepPeriod;
        __bis_SR_register(LPM0_bits + GIE);         // Host MCU waits for data sleeping in LPM4

        gatewayReceiveCmd();
        if(spyEnable || forceEnable){
            gatewayPassiveListen();
        }
    }
}
