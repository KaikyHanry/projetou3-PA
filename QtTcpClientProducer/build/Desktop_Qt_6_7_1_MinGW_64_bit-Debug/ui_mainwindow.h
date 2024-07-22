/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter_13;
    QSplitter *splitter_12;
    QSplitter *splitter_2;
    QLineEdit *lineSetAddress;
    QSplitter *splitter;
    QPushButton *pushButtonCon;
    QPushButton *pushButtonDisc;
    QSplitter *splitter_4;
    QSplitter *splitter_3;
    QLabel *labelMin;
    QSlider *horizontalSliderMin;
    QLCDNumber *lcdNumberMin;
    QSplitter *splitter_6;
    QSplitter *splitter_5;
    QLabel *labelMax;
    QSlider *horizontalSliderMax;
    QLCDNumber *lcdNumberMax;
    QSplitter *splitter_11;
    QSplitter *splitter_10;
    QSplitter *splitter_8;
    QSplitter *splitter_7;
    QLabel *label;
    QSlider *horizontalSliderTiming;
    QLabel *label_2;
    QSplitter *splitter_9;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QLabel *labelStatus;
    QTextEdit *textEditShowData;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(524, 455);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        splitter_13 = new QSplitter(centralWidget);
        splitter_13->setObjectName("splitter_13");
        splitter_13->setOrientation(Qt::Vertical);
        splitter_12 = new QSplitter(splitter_13);
        splitter_12->setObjectName("splitter_12");
        splitter_12->setOrientation(Qt::Vertical);
        splitter_2 = new QSplitter(splitter_12);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Vertical);
        lineSetAddress = new QLineEdit(splitter_2);
        lineSetAddress->setObjectName("lineSetAddress");
        splitter_2->addWidget(lineSetAddress);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        pushButtonCon = new QPushButton(splitter);
        pushButtonCon->setObjectName("pushButtonCon");
        splitter->addWidget(pushButtonCon);
        pushButtonDisc = new QPushButton(splitter);
        pushButtonDisc->setObjectName("pushButtonDisc");
        splitter->addWidget(pushButtonDisc);
        splitter_2->addWidget(splitter);
        splitter_12->addWidget(splitter_2);
        splitter_4 = new QSplitter(splitter_12);
        splitter_4->setObjectName("splitter_4");
        splitter_4->setOrientation(Qt::Horizontal);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setOrientation(Qt::Vertical);
        labelMin = new QLabel(splitter_3);
        labelMin->setObjectName("labelMin");
        splitter_3->addWidget(labelMin);
        horizontalSliderMin = new QSlider(splitter_3);
        horizontalSliderMin->setObjectName("horizontalSliderMin");
        horizontalSliderMin->setOrientation(Qt::Horizontal);
        splitter_3->addWidget(horizontalSliderMin);
        splitter_4->addWidget(splitter_3);
        lcdNumberMin = new QLCDNumber(splitter_4);
        lcdNumberMin->setObjectName("lcdNumberMin");
        splitter_4->addWidget(lcdNumberMin);
        splitter_12->addWidget(splitter_4);
        splitter_6 = new QSplitter(splitter_12);
        splitter_6->setObjectName("splitter_6");
        splitter_6->setOrientation(Qt::Horizontal);
        splitter_5 = new QSplitter(splitter_6);
        splitter_5->setObjectName("splitter_5");
        splitter_5->setOrientation(Qt::Vertical);
        labelMax = new QLabel(splitter_5);
        labelMax->setObjectName("labelMax");
        splitter_5->addWidget(labelMax);
        horizontalSliderMax = new QSlider(splitter_5);
        horizontalSliderMax->setObjectName("horizontalSliderMax");
        horizontalSliderMax->setOrientation(Qt::Horizontal);
        splitter_5->addWidget(horizontalSliderMax);
        splitter_6->addWidget(splitter_5);
        lcdNumberMax = new QLCDNumber(splitter_6);
        lcdNumberMax->setObjectName("lcdNumberMax");
        lcdNumberMax->setFrameShadow(QFrame::Raised);
        splitter_6->addWidget(lcdNumberMax);
        splitter_12->addWidget(splitter_6);
        splitter_13->addWidget(splitter_12);
        splitter_11 = new QSplitter(splitter_13);
        splitter_11->setObjectName("splitter_11");
        splitter_11->setOrientation(Qt::Vertical);
        splitter_10 = new QSplitter(splitter_11);
        splitter_10->setObjectName("splitter_10");
        splitter_10->setOrientation(Qt::Vertical);
        splitter_8 = new QSplitter(splitter_10);
        splitter_8->setObjectName("splitter_8");
        splitter_8->setOrientation(Qt::Horizontal);
        splitter_7 = new QSplitter(splitter_8);
        splitter_7->setObjectName("splitter_7");
        splitter_7->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter_7);
        label->setObjectName("label");
        splitter_7->addWidget(label);
        horizontalSliderTiming = new QSlider(splitter_7);
        horizontalSliderTiming->setObjectName("horizontalSliderTiming");
        horizontalSliderTiming->setMinimum(1);
        horizontalSliderTiming->setMaximum(3);
        horizontalSliderTiming->setOrientation(Qt::Horizontal);
        splitter_7->addWidget(horizontalSliderTiming);
        splitter_8->addWidget(splitter_7);
        label_2 = new QLabel(splitter_8);
        label_2->setObjectName("label_2");
        splitter_8->addWidget(label_2);
        splitter_10->addWidget(splitter_8);
        splitter_9 = new QSplitter(splitter_10);
        splitter_9->setObjectName("splitter_9");
        splitter_9->setOrientation(Qt::Horizontal);
        pushButtonStart = new QPushButton(splitter_9);
        pushButtonStart->setObjectName("pushButtonStart");
        splitter_9->addWidget(pushButtonStart);
        pushButtonStop = new QPushButton(splitter_9);
        pushButtonStop->setObjectName("pushButtonStop");
        splitter_9->addWidget(pushButtonStop);
        splitter_10->addWidget(splitter_9);
        splitter_11->addWidget(splitter_10);
        labelStatus = new QLabel(splitter_11);
        labelStatus->setObjectName("labelStatus");
        splitter_11->addWidget(labelStatus);
        splitter_13->addWidget(splitter_11);

        horizontalLayout->addWidget(splitter_13);

        textEditShowData = new QTextEdit(centralWidget);
        textEditShowData->setObjectName("textEditShowData");

        horizontalLayout->addWidget(textEditShowData);

        horizontalLayout->setStretch(0, 50);
        horizontalLayout->setStretch(1, 50);

        horizontalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 524, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderMin, &QSlider::valueChanged, lcdNumberMin, qOverload<int>(&QLCDNumber::display));
        QObject::connect(horizontalSliderMax, &QSlider::valueChanged, lcdNumberMax, qOverload<int>(&QLCDNumber::display));
        QObject::connect(horizontalSliderTiming, &QSlider::valueChanged, label_2, qOverload<int>(&QLabel::setNum));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineSetAddress->setText(QString());
        pushButtonCon->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisc->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        labelMin->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        labelMax->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        labelStatus->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
