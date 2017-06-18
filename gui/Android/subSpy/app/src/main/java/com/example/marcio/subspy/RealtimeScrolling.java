package com.example.marcio.subspy;

import android.content.Intent;
import android.hardware.usb.UsbDevice;
import android.hardware.usb.UsbDeviceConnection;
import android.os.Handler;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

import com.example.marcio.subspy.usbserial.UsbSerialDevice;
import com.example.marcio.subspy.usbserial.UsbSerialInterface;
import com.jjoe64.graphview.GraphView;
import com.jjoe64.graphview.series.DataPoint;
import com.jjoe64.graphview.series.LineGraphSeries;

import java.util.Random;

public class RealtimeScrolling extends AppCompatActivity {
    private final Handler mHandler = new Handler();
    LineGraphSeries<DataPoint> series;
    private Runnable mTimer;
    private double graphLastXValue = 5d;
    UsbDevice device;
    UsbDeviceConnection usbConnection;
    UsbSerialDevice serial = UsbSerialDevice.createUsbSerialDevice(device, usbConnection);

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_display_message);

        GraphView graph = (GraphView) findViewById(R.id.graph);

        //graph.addSeries(series);
        initGraph(graph);

        serial.open();
        serial.setBaudRate(115200);
        serial.setDataBits(UsbSerialInterface.DATA_BITS_8);
        serial.setParity(UsbSerialInterface.PARITY_ODD);
        serial.setFlowControl(UsbSerialInterface.FLOW_CONTROL_OFF);

        // Get the Intent that started this activity and extract the string
        //Intent intent = getIntent();
        //String message = intent.getStringExtra(MainActivity.EXTRA_MESSAGE);

        // Capture the layout's TextView and set the string as its text
        // TextView textView = (TextView) findViewById(R.id.textView);
        // textView.setText(message);
    }

    private UsbSerialInterface.UsbReadCallback mCallback = new UsbSerialInterface.UsbReadCallback(){
        @Override
        public void onReceivedData(byte[] arg0)
        {
            graphLastXValue += 0.25d;
        }

    };

    public void initGraph(GraphView graph) {
        graph.getViewport().setXAxisBoundsManual(true);
        graph.getViewport().setMinX(0);
        graph.getViewport().setMaxX(4);

        graph.getGridLabelRenderer().setLabelVerticalWidth(100);

        // first mSeries is a line
        series = new LineGraphSeries<>();
        series.setDrawDataPoints(true);
        series.setDrawBackground(true);
        graph.addSeries(series);
    }

    public void onResume() {
        super.onResume();
        mTimer = new Runnable() {
            @Override
            public void run() {
                graphLastXValue += 0.25d;
                series.appendData(new DataPoint(graphLastXValue, getRandom()), true, 22);
                mHandler.postDelayed(this, 330);
            }
        };
        mHandler.postDelayed(mTimer, 1500);
        serial.write("DATA_TEST".getBytes());
    }

    public void onPause() {
        serial.read(mCallback);
        mHandler.removeCallbacks(mTimer);
        super.onPause();
    }

    double mLastRandom = 2;
    Random mRand = new Random();
    private double getRandom() {
        return mLastRandom += mRand.nextDouble()*0.5 - 0.25;
    }
}
