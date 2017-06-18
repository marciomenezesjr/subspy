package com.example.marcio.subspy;

import android.Manifest;
import android.app.Activity;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageManager;
import android.hardware.usb.UsbDevice;
import android.hardware.usb.UsbDeviceConnection;
import android.hardware.usb.UsbManager;
import android.os.Bundle;
import android.os.Environment;
import android.support.v4.app.ActivityCompat;
import android.text.method.ScrollingMovementMethod;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.ScrollView;
import android.widget.TextView;

import com.example.marcio.subspy.usbserial.UsbSerialDevice;
import com.example.marcio.subspy.usbserial.UsbSerialInterface;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.util.Calendar;
import java.util.HashMap;
import java.util.Map;

import static android.content.ContentValues.TAG;

public class usbSerialInterface extends Activity {
    public final String ACTION_USB_PERMISSION = "com.hariharan.arduinousb.USB_PERMISSION";
    Button openButton, clearButton, closeButton, sendButton;
    TextView textView;
    EditText editText;
    UsbManager usbManager;
    UsbDevice device;
    UsbSerialDevice serialPort;
    UsbDeviceConnection connection;

    // Storage Permissions
    private static final int REQUEST_EXTERNAL_STORAGE = 1;
    private static String[] PERMISSIONS_STORAGE = {
            Manifest.permission.READ_EXTERNAL_STORAGE,
            Manifest.permission.WRITE_EXTERNAL_STORAGE
    };

    UsbSerialInterface.UsbReadCallback mCallback = new UsbSerialInterface.UsbReadCallback() { //Defining a Callback which triggers whenever data is read.
        @Override
        public void onReceivedData(byte[] arg0) {
            int sinkId;
            int packetType;
            int packetLength;
            int sourceId;
            int epoch;
            int dielectric;
            int temperature;
            int packetsSent;
            int sendingRetries;
            int packetsLost;
            int rtt;
            int rssi;
            int memoryPage;

            sinkId = arg0[0];
            packetType = arg0[1];
            packetLength = arg0[2];
            sourceId = arg0[3];
            sendingRetries = arg0[14];

            epoch = fetch(arg0, 4, 4);
            dielectric = fetch(arg0, 8, 2);
            temperature = fetch(arg0, 10, 2);
            packetsSent = fetch(arg0, 12, 2);
            packetsLost = fetch(arg0, 15, 2);
            rssi = fetch(arg0, 19, 2);
            rtt = fetch(arg0, 17, 2);
            memoryPage = fetch(arg0, 21, 3);


            tvAppend(textView, String.valueOf(sinkId) + ';' + String.valueOf(packetType) + ';' + String.valueOf(packetLength) +
                    ';' + String.valueOf(sourceId) + ';' + String.valueOf(epoch) + ';' + String.valueOf(dielectric) +
                    ';' + String.valueOf(temperature) + ';' + String.valueOf(packetsSent) + ';' + String.valueOf(sendingRetries) +
                    ';' + String.valueOf(packetsLost) + ';' + String.valueOf(rtt) + ';' + String.valueOf(rssi) + ';' + '\n');

            //data = new String(arg0, "UTF-8");

            //data.concat("/n");
            //tvAppend(textView, data);

            /*} catch (UnsupportedEncodingException e) {
                e.printStackTrace();
            }*/


        }
    };

    public int fetch(byte[] data, int offset, int size) {
        int i;
        int auxInt = 0;
        for(i=offset; i<(size+offset); i++){
            auxInt += data[i];
            if((i-offset) < (size -1)){
                auxInt <<= 8;
            }
        }
        return auxInt;
    }

    private final BroadcastReceiver broadcastReceiver = new BroadcastReceiver() { //Broadcast Receiver to automatically start and stop the Serial connection.
        @Override
        public void onReceive(Context context, Intent intent) {
            if (intent.getAction().equals(ACTION_USB_PERMISSION)) {
                boolean granted = intent.getExtras().getBoolean(UsbManager.EXTRA_PERMISSION_GRANTED);
                if (granted) {
                    connection = usbManager.openDevice(device);
                    serialPort = UsbSerialDevice.createUsbSerialDevice(device, connection);
                    if (serialPort != null) {
                        if (serialPort.open()) { //Set Serial Connection Parameters.
                            setUiEnabled(true);
                            serialPort.setBaudRate(115200);
                            serialPort.setDataBits(UsbSerialInterface.DATA_BITS_8);
                            serialPort.setStopBits(UsbSerialInterface.STOP_BITS_1);
                            serialPort.setParity(UsbSerialInterface.PARITY_NONE);
                            serialPort.setFlowControl(UsbSerialInterface.FLOW_CONTROL_OFF);
                            serialPort.read(mCallback);
                            //byte openCmd[] = {(byte)0xab, 0x01, 0x64 , (byte)0xff};
                            //serialPort.write(openCmd);
                            tvAppend(textView,"Subspy interface is running!\n");

                        } else {
                            Log.d("SERIAL", "PORT NOT OPEN");
                        }
                    } else {
                        Log.d("SERIAL", "PORT IS NULL");
                    }
                } else {
                    Log.d("SERIAL", "PERM NOT GRANTED");
                }
            } else if (intent.getAction().equals(UsbManager.ACTION_USB_DEVICE_ATTACHED)) {
                onClickOpen(openButton);
            } else if (intent.getAction().equals(UsbManager.ACTION_USB_DEVICE_DETACHED)) {
                onClickClose(closeButton);
            }
        }
    };

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        verifyStoragePermissions(this);
        setContentView(R.layout.activity_display_message);
        usbManager = (UsbManager) getSystemService(this.USB_SERVICE);
        openButton = (Button) findViewById(R.id.buttonStart);
        clearButton = (Button) findViewById(R.id.buttonClear);
        closeButton = (Button) findViewById(R.id.buttonStop);
        sendButton = (Button) findViewById(R.id.buttonSend);
        editText = (EditText) findViewById(R.id.editText);
        textView = (TextView) findViewById(R.id.textView);
        setUiEnabled(false);
        IntentFilter filter = new IntentFilter();
        filter.addAction(ACTION_USB_PERMISSION);
        filter.addAction(UsbManager.ACTION_USB_DEVICE_ATTACHED);
        filter.addAction(UsbManager.ACTION_USB_DEVICE_DETACHED);
        registerReceiver(broadcastReceiver, filter);
    }

    public void setUiEnabled(boolean bool) {
        openButton.setEnabled(!bool);
        clearButton.setEnabled(true);
        closeButton.setEnabled(bool);
        sendButton.setEnabled(bool);
        textView.setEnabled(bool);
    }

    public void onClickOpen(View view) {

        HashMap<String, UsbDevice> usbDevices = usbManager.getDeviceList();

        if (!usbDevices.isEmpty()) {
            boolean keep = true;
            for (Map.Entry<String, UsbDevice> entry : usbDevices.entrySet()) {
                device = entry.getValue();
                int deviceVID = device.getVendorId();
                if (deviceVID == 0x2047)//Arduino Vendor ID
                {
                    PendingIntent pi = PendingIntent.getBroadcast(this, 0, new Intent(ACTION_USB_PERMISSION), 0);
                    usbManager.requestPermission(device, pi);
                    keep = false;
                } else {
                    connection = null;
                    device = null;
                }

                if (!keep)
                    break;
            }
        }
    }

    public void onClickSend(View view) {
        //String string = editText.getText().toString();
        //serialPort.write(string.getBytes());
        //tvAppend(textView, "\nData Sent : " + string + "\n");
        //writeToFile(textView.getText().toString());
    }


    public void onClickClose(View view) {
        tvAppend(textView,"\nSerial Connection Closed! \n");
        setUiEnabled(false);
        writeToFile(textView.getText().toString());
        connection.close();
        textView.setText(" ");
    }

    public void onClickClear(View view) {
        textView.setText(" ");
    }

    private void tvAppend(TextView tv, CharSequence text) {
        final TextView ftv = tv;
        final CharSequence ftext = text;

        runOnUiThread(new Runnable() {
            @Override
            public void run() {
                String old=textView.getText().toString();
                String updated = ftext+old;
                ftv.setText(updated);
                ftv.setMovementMethod(new ScrollingMovementMethod());
            }
        });
    }

   /* private void writeToFile(String data){
        File root = android.os.Environment.getExternalStorageDirectory();
        File dir = new File (root.getAbsolutePath() + "/download");
        dir.mkdirs();
        File file = new File(dir, "spy.txt");

        tvAppend(textView, "\nExternal file system root: "+root);
        try{
            FileOutputStream f = new FileOutputStream(file);
            PrintWriter pw = new PrintWriter(f);
            pw.println("Hi , How are you");
            pw.println("Hello");
            pw.flush();
            pw.close();
            f.close();
            tvAppend(textView, "SAVED :D  !!!");
        } catch (FileNotFoundException e) {
            tvAppend(textView, "File not saved NOTFOUND :(  !!!");
            e.printStackTrace();
            Log.i(TAG, "******* File not found. Did you" +
                    " add a WRITE_EXTERNAL_STORAGE permission to the   manifest?");
        } catch (IOException e) {
            tvAppend(textView, "File not saved IOERR :(  !!!");
            e.printStackTrace();
        }

    }*/

    private void writeToFile(String data){
        FileOutputStream outputStream;
        Calendar c = Calendar.getInstance();

        try {
            File file = new File(Environment.getExternalStoragePublicDirectory(Environment.DIRECTORY_DOWNLOADS) + "/subspy_" + String.valueOf(c.getTimeInMillis()) + ".txt");
            //tvAppend(textView, file.getAbsolutePath());
            outputStream = new FileOutputStream(file);
            outputStream.write(data.getBytes());
            //outputStream.write("\nEnd of File".getBytes());
            outputStream.close();
            //tvAppend(textView, "\nSAVED :D  !!!\n");
        } catch (IOException e) {
            tvAppend(textView, "\nException, file not saved :(\n");
            e.printStackTrace();
        }
    }

    public static void verifyStoragePermissions(Activity activity) {
        // Check if we have write permission
        int permission = ActivityCompat.checkSelfPermission(activity, Manifest.permission.WRITE_EXTERNAL_STORAGE);

        if (permission != PackageManager.PERMISSION_GRANTED) {
            // We don't have permission so prompt the user
            ActivityCompat.requestPermissions(
                    activity,
                    PERMISSIONS_STORAGE,
                    REQUEST_EXTERNAL_STORAGE
            );
        }
    }
}