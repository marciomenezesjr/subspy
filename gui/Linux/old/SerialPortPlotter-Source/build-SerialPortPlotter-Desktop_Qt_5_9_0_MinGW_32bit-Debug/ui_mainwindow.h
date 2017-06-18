/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHow_to_use;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *plot;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *console;
    QVBoxLayout *controlsLayout;
    QGroupBox *PortControlsBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPort;
    QComboBox *comboPort;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelBaud;
    QComboBox *comboBaud;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelData;
    QComboBox *comboData;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelParity;
    QComboBox *comboParity;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelStop;
    QComboBox *comboStop;
    QPushButton *refreshPortsButton;
    QPushButton *connectButton;
    QGroupBox *DeviceControls;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *CounterDisplay;
    QLabel *counterDisplayLabel;
    QLCDNumber *counterDisplay;
    QHBoxLayout *Period;
    QLabel *periodLabel;
    QComboBox *devPeriod;
    QHBoxLayout *DutyCycle;
    QLabel *dutyCycleLabel;
    QComboBox *devDutyCycle;
    QHBoxLayout *CustomCommand;
    QLabel *customCommandLabel;
    QComboBox *customCommand;
    QPushButton *sendDevCmd;
    QGroupBox *PlotControlsBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *plotControlsLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelNodes;
    QComboBox *comboNodes;
    QHBoxLayout *horizontalLayout_10;
    QLabel *pointsLabel;
    QSpinBox *spinPoints;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *autoscaleButton;
    QPushButton *resetPlotButton;
    QPushButton *stopPlotButton;
    QPushButton *saveJPGButton;
    QPushButton *resetMonWindow;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_3;
    QComboBox *comboAvgTmp;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QComboBox *comboAvgDie;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QComboBox *comboRate;
    QSpacerItem *verticalSpacer;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuHelo;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1033, 810);
        MainWindow->setMinimumSize(QSize(840, 620));
        actionHow_to_use = new QAction(MainWindow);
        actionHow_to_use->setObjectName(QStringLiteral("actionHow_to_use"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        plot = new QCustomPlot(centralWidget);
        plot->setObjectName(QStringLiteral("plot"));

        verticalLayout_2->addWidget(plot);

        horizontalSpacer = new QSpacerItem(663, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);

        console = new QTextBrowser(centralWidget);
        console->setObjectName(QStringLiteral("console"));
        console->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(console->sizePolicy().hasHeightForWidth());
        console->setSizePolicy(sizePolicy);
        console->setMaximumSize(QSize(16777215, 200));

        verticalLayout_2->addWidget(console);


        gridLayout_3->addLayout(verticalLayout_2, 0, 2, 1, 1);

        controlsLayout = new QVBoxLayout();
        controlsLayout->setSpacing(6);
        controlsLayout->setObjectName(QStringLiteral("controlsLayout"));
        PortControlsBox = new QGroupBox(centralWidget);
        PortControlsBox->setObjectName(QStringLiteral("PortControlsBox"));
        PortControlsBox->setFlat(false);
        PortControlsBox->setCheckable(false);
        gridLayout = new QGridLayout(PortControlsBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelPort = new QLabel(PortControlsBox);
        labelPort->setObjectName(QStringLiteral("labelPort"));
        labelPort->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(labelPort);

        comboPort = new QComboBox(PortControlsBox);
        comboPort->setObjectName(QStringLiteral("comboPort"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboPort->sizePolicy().hasHeightForWidth());
        comboPort->setSizePolicy(sizePolicy1);
        comboPort->setMinimumSize(QSize(69, 0));
        comboPort->setMaximumSize(QSize(69, 16777215));

        horizontalLayout->addWidget(comboPort);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelBaud = new QLabel(PortControlsBox);
        labelBaud->setObjectName(QStringLiteral("labelBaud"));
        labelBaud->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(labelBaud);

        comboBaud = new QComboBox(PortControlsBox);
        comboBaud->setObjectName(QStringLiteral("comboBaud"));
        sizePolicy1.setHeightForWidth(comboBaud->sizePolicy().hasHeightForWidth());
        comboBaud->setSizePolicy(sizePolicy1);
        comboBaud->setMinimumSize(QSize(69, 0));
        comboBaud->setMaximumSize(QSize(69, 16777215));
        comboBaud->setEditable(true);

        horizontalLayout_2->addWidget(comboBaud);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelData = new QLabel(PortControlsBox);
        labelData->setObjectName(QStringLiteral("labelData"));
        labelData->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(labelData);

        comboData = new QComboBox(PortControlsBox);
        comboData->setObjectName(QStringLiteral("comboData"));
        sizePolicy1.setHeightForWidth(comboData->sizePolicy().hasHeightForWidth());
        comboData->setSizePolicy(sizePolicy1);
        comboData->setMinimumSize(QSize(69, 0));
        comboData->setMaximumSize(QSize(69, 16777215));

        horizontalLayout_3->addWidget(comboData);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelParity = new QLabel(PortControlsBox);
        labelParity->setObjectName(QStringLiteral("labelParity"));
        labelParity->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_4->addWidget(labelParity);

        comboParity = new QComboBox(PortControlsBox);
        comboParity->setObjectName(QStringLiteral("comboParity"));
        sizePolicy1.setHeightForWidth(comboParity->sizePolicy().hasHeightForWidth());
        comboParity->setSizePolicy(sizePolicy1);
        comboParity->setMinimumSize(QSize(69, 0));
        comboParity->setMaximumSize(QSize(69, 16777215));

        horizontalLayout_4->addWidget(comboParity);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelStop = new QLabel(PortControlsBox);
        labelStop->setObjectName(QStringLiteral("labelStop"));
        labelStop->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_5->addWidget(labelStop);

        comboStop = new QComboBox(PortControlsBox);
        comboStop->setObjectName(QStringLiteral("comboStop"));
        sizePolicy1.setHeightForWidth(comboStop->sizePolicy().hasHeightForWidth());
        comboStop->setSizePolicy(sizePolicy1);
        comboStop->setMinimumSize(QSize(69, 0));
        comboStop->setMaximumSize(QSize(69, 16777215));

        horizontalLayout_5->addWidget(comboStop);


        verticalLayout_3->addLayout(horizontalLayout_5);

        refreshPortsButton = new QPushButton(PortControlsBox);
        refreshPortsButton->setObjectName(QStringLiteral("refreshPortsButton"));

        verticalLayout_3->addWidget(refreshPortsButton);

        connectButton = new QPushButton(PortControlsBox);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        connectButton->setMinimumSize(QSize(0, 0));
        connectButton->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_3->addWidget(connectButton);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        controlsLayout->addWidget(PortControlsBox);

        DeviceControls = new QGroupBox(centralWidget);
        DeviceControls->setObjectName(QStringLiteral("DeviceControls"));
        horizontalLayout_14 = new QHBoxLayout(DeviceControls);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        CounterDisplay = new QHBoxLayout();
        CounterDisplay->setSpacing(6);
        CounterDisplay->setObjectName(QStringLiteral("CounterDisplay"));
        counterDisplayLabel = new QLabel(DeviceControls);
        counterDisplayLabel->setObjectName(QStringLiteral("counterDisplayLabel"));

        CounterDisplay->addWidget(counterDisplayLabel);

        counterDisplay = new QLCDNumber(DeviceControls);
        counterDisplay->setObjectName(QStringLiteral("counterDisplay"));

        CounterDisplay->addWidget(counterDisplay);


        verticalLayout_5->addLayout(CounterDisplay);

        Period = new QHBoxLayout();
        Period->setSpacing(6);
        Period->setObjectName(QStringLiteral("Period"));
        periodLabel = new QLabel(DeviceControls);
        periodLabel->setObjectName(QStringLiteral("periodLabel"));

        Period->addWidget(periodLabel);

        devPeriod = new QComboBox(DeviceControls);
        devPeriod->setObjectName(QStringLiteral("devPeriod"));
        devPeriod->setEditable(true);

        Period->addWidget(devPeriod);


        verticalLayout_5->addLayout(Period);

        DutyCycle = new QHBoxLayout();
        DutyCycle->setSpacing(6);
        DutyCycle->setObjectName(QStringLiteral("DutyCycle"));
        DutyCycle->setSizeConstraint(QLayout::SetDefaultConstraint);
        dutyCycleLabel = new QLabel(DeviceControls);
        dutyCycleLabel->setObjectName(QStringLiteral("dutyCycleLabel"));

        DutyCycle->addWidget(dutyCycleLabel);

        devDutyCycle = new QComboBox(DeviceControls);
        devDutyCycle->setObjectName(QStringLiteral("devDutyCycle"));
        devDutyCycle->setEditable(true);

        DutyCycle->addWidget(devDutyCycle);


        verticalLayout_5->addLayout(DutyCycle);

        CustomCommand = new QHBoxLayout();
        CustomCommand->setSpacing(6);
        CustomCommand->setObjectName(QStringLiteral("CustomCommand"));
        customCommandLabel = new QLabel(DeviceControls);
        customCommandLabel->setObjectName(QStringLiteral("customCommandLabel"));

        CustomCommand->addWidget(customCommandLabel);

        customCommand = new QComboBox(DeviceControls);
        customCommand->setObjectName(QStringLiteral("customCommand"));
        customCommand->setEditable(true);

        CustomCommand->addWidget(customCommand);


        verticalLayout_5->addLayout(CustomCommand);

        sendDevCmd = new QPushButton(DeviceControls);
        sendDevCmd->setObjectName(QStringLiteral("sendDevCmd"));

        verticalLayout_5->addWidget(sendDevCmd);


        horizontalLayout_14->addLayout(verticalLayout_5);


        controlsLayout->addWidget(DeviceControls);

        PlotControlsBox = new QGroupBox(centralWidget);
        PlotControlsBox->setObjectName(QStringLiteral("PlotControlsBox"));
        gridLayout_2 = new QGridLayout(PlotControlsBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        plotControlsLayout = new QVBoxLayout();
        plotControlsLayout->setSpacing(6);
        plotControlsLayout->setObjectName(QStringLiteral("plotControlsLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        labelNodes = new QLabel(PlotControlsBox);
        labelNodes->setObjectName(QStringLiteral("labelNodes"));
        labelNodes->setMinimumSize(QSize(60, 0));
        labelNodes->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_6->addWidget(labelNodes);

        comboNodes = new QComboBox(PlotControlsBox);
        comboNodes->setObjectName(QStringLiteral("comboNodes"));
        comboNodes->setMinimumSize(QSize(69, 0));
        comboNodes->setMaximumSize(QSize(69, 16777215));

        horizontalLayout_6->addWidget(comboNodes);


        plotControlsLayout->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        pointsLabel = new QLabel(PlotControlsBox);
        pointsLabel->setObjectName(QStringLiteral("pointsLabel"));
        pointsLabel->setMinimumSize(QSize(60, 0));
        pointsLabel->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_10->addWidget(pointsLabel);

        spinPoints = new QSpinBox(PlotControlsBox);
        spinPoints->setObjectName(QStringLiteral("spinPoints"));
        spinPoints->setMinimumSize(QSize(69, 0));
        spinPoints->setMaximumSize(QSize(69, 16777215));
        spinPoints->setMinimum(10);
        spinPoints->setMaximum(1000);
        spinPoints->setValue(500);

        horizontalLayout_10->addWidget(spinPoints);


        plotControlsLayout->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));

        plotControlsLayout->addLayout(horizontalLayout_8);

        autoscaleButton = new QPushButton(PlotControlsBox);
        autoscaleButton->setObjectName(QStringLiteral("autoscaleButton"));

        plotControlsLayout->addWidget(autoscaleButton);

        resetPlotButton = new QPushButton(PlotControlsBox);
        resetPlotButton->setObjectName(QStringLiteral("resetPlotButton"));

        plotControlsLayout->addWidget(resetPlotButton);

        stopPlotButton = new QPushButton(PlotControlsBox);
        stopPlotButton->setObjectName(QStringLiteral("stopPlotButton"));
        stopPlotButton->setMinimumSize(QSize(0, 0));
        stopPlotButton->setMaximumSize(QSize(16777215, 16777215));

        plotControlsLayout->addWidget(stopPlotButton);

        saveJPGButton = new QPushButton(PlotControlsBox);
        saveJPGButton->setObjectName(QStringLiteral("saveJPGButton"));

        plotControlsLayout->addWidget(saveJPGButton);

        resetMonWindow = new QPushButton(PlotControlsBox);
        resetMonWindow->setObjectName(QStringLiteral("resetMonWindow"));

        plotControlsLayout->addWidget(resetMonWindow);


        gridLayout_2->addLayout(plotControlsLayout, 0, 0, 1, 1);


        controlsLayout->addWidget(PlotControlsBox);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_11->addWidget(label_3);

        comboAvgTmp = new QComboBox(groupBox);
        comboAvgTmp->setObjectName(QStringLiteral("comboAvgTmp"));
        comboAvgTmp->setEnabled(true);
        comboAvgTmp->setEditable(true);

        horizontalLayout_11->addWidget(comboAvgTmp);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_9->addWidget(label_2);

        comboAvgDie = new QComboBox(groupBox);
        comboAvgDie->setObjectName(QStringLiteral("comboAvgDie"));
        comboAvgDie->setEnabled(true);
        comboAvgDie->setEditable(true);

        horizontalLayout_9->addWidget(comboAvgDie);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_7->addWidget(label);

        comboRate = new QComboBox(groupBox);
        comboRate->setObjectName(QStringLiteral("comboRate"));
        comboRate->setEnabled(true);
        comboRate->setEditable(true);

        horizontalLayout_7->addWidget(comboRate);


        verticalLayout->addLayout(horizontalLayout_7);


        gridLayout_4->addLayout(verticalLayout, 0, 0, 1, 1);


        controlsLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 62, QSizePolicy::Minimum, QSizePolicy::Expanding);

        controlsLayout->addItem(verticalSpacer);


        gridLayout_3->addLayout(controlsLayout, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1033, 21));
        menuHelo = new QMenu(menuBar);
        menuHelo->setObjectName(QStringLiteral("menuHelo"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuHelo->menuAction());
        menuHelo->addAction(actionHow_to_use);

        retranslateUi(MainWindow);

        comboNodes->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionHow_to_use->setText(QApplication::translate("MainWindow", "How to use ", Q_NULLPTR));
        PortControlsBox->setTitle(QApplication::translate("MainWindow", "PORT CONTROLS", Q_NULLPTR));
        labelPort->setText(QApplication::translate("MainWindow", "PORT", Q_NULLPTR));
        labelBaud->setText(QApplication::translate("MainWindow", "BAUD", Q_NULLPTR));
        labelData->setText(QApplication::translate("MainWindow", "DATA", Q_NULLPTR));
        labelParity->setText(QApplication::translate("MainWindow", "PARITY", Q_NULLPTR));
        labelStop->setText(QApplication::translate("MainWindow", "STOP", Q_NULLPTR));
        refreshPortsButton->setText(QApplication::translate("MainWindow", "Refresh", Q_NULLPTR));
        connectButton->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        DeviceControls->setTitle(QApplication::translate("MainWindow", "DEVICE CONTROLS", Q_NULLPTR));
        counterDisplayLabel->setText(QApplication::translate("MainWindow", "Packet Counter", Q_NULLPTR));
        periodLabel->setText(QApplication::translate("MainWindow", "Period (s)", Q_NULLPTR));
        dutyCycleLabel->setText(QApplication::translate("MainWindow", "Duty Cycle %", Q_NULLPTR));
        customCommandLabel->setText(QApplication::translate("MainWindow", "Custom", Q_NULLPTR));
        sendDevCmd->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        PlotControlsBox->setTitle(QApplication::translate("MainWindow", "PLOT CONTROLS", Q_NULLPTR));
        labelNodes->setText(QApplication::translate("MainWindow", "Node Id", Q_NULLPTR));
        pointsLabel->setText(QApplication::translate("MainWindow", "Buffer Size", Q_NULLPTR));
        autoscaleButton->setText(QApplication::translate("MainWindow", "Auto Scale", Q_NULLPTR));
        resetPlotButton->setText(QApplication::translate("MainWindow", "Reset Plot", Q_NULLPTR));
        stopPlotButton->setText(QApplication::translate("MainWindow", "Stop Plot", Q_NULLPTR));
        saveJPGButton->setText(QApplication::translate("MainWindow", "Save JPG", Q_NULLPTR));
        resetMonWindow->setText(QApplication::translate("MainWindow", "Clear Monitor Window", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Data Stats", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Avg. Temperature", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Avg. Dielectric", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Rx Rate (mS)", Q_NULLPTR));
        menuHelo->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
