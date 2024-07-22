/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonCon;
    QPushButton *pushButtonDisc;
    QLineEdit *lineSetAddress;
    QSlider *horizontalSliderMin;
    QSlider *horizontalSliderMax;
    QLabel *labelMin;
    QLabel *labelMax;
    QLCDNumber *lcdNumberMin;
    QLCDNumber *lcdNumberMax;
    QLabel *labelStatus;
    QTextEdit *textEditShowData;
    QSlider *horizontalSliderTiming;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButtonStop;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(443, 378);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName("pushButtonStart");
        pushButtonStart->setGeometry(QRect(10, 230, 101, 29));
        pushButtonCon = new QPushButton(centralWidget);
        pushButtonCon->setObjectName("pushButtonCon");
        pushButtonCon->setGeometry(QRect(10, 50, 91, 31));
        pushButtonDisc = new QPushButton(centralWidget);
        pushButtonDisc->setObjectName("pushButtonDisc");
        pushButtonDisc->setGeometry(QRect(110, 50, 91, 31));
        lineSetAddress = new QLineEdit(centralWidget);
        lineSetAddress->setObjectName("lineSetAddress");
        lineSetAddress->setGeometry(QRect(10, 10, 191, 31));
        horizontalSliderMin = new QSlider(centralWidget);
        horizontalSliderMin->setObjectName("horizontalSliderMin");
        horizontalSliderMin->setGeometry(QRect(10, 110, 160, 16));
        horizontalSliderMin->setOrientation(Qt::Horizontal);
        horizontalSliderMax = new QSlider(centralWidget);
        horizontalSliderMax->setObjectName("horizontalSliderMax");
        horizontalSliderMax->setGeometry(QRect(10, 160, 160, 16));
        horizontalSliderMax->setOrientation(Qt::Horizontal);
        labelMin = new QLabel(centralWidget);
        labelMin->setObjectName("labelMin");
        labelMin->setGeometry(QRect(10, 90, 49, 16));
        labelMax = new QLabel(centralWidget);
        labelMax->setObjectName("labelMax");
        labelMax->setGeometry(QRect(10, 140, 49, 16));
        lcdNumberMin = new QLCDNumber(centralWidget);
        lcdNumberMin->setObjectName("lcdNumberMin");
        lcdNumberMin->setGeometry(QRect(170, 100, 64, 23));
        lcdNumberMax = new QLCDNumber(centralWidget);
        lcdNumberMax->setObjectName("lcdNumberMax");
        lcdNumberMax->setGeometry(QRect(170, 150, 64, 23));
        labelStatus = new QLabel(centralWidget);
        labelStatus->setObjectName("labelStatus");
        labelStatus->setGeometry(QRect(10, 270, 101, 21));
        textEditShowData = new QTextEdit(centralWidget);
        textEditShowData->setObjectName("textEditShowData");
        textEditShowData->setGeometry(QRect(260, 10, 161, 301));
        horizontalSliderTiming = new QSlider(centralWidget);
        horizontalSliderTiming->setObjectName("horizontalSliderTiming");
        horizontalSliderTiming->setGeometry(QRect(70, 190, 151, 31));
        horizontalSliderTiming->setMaximum(5);
        horizontalSliderTiming->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 190, 51, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 200, 16, 16));
        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName("pushButtonStop");
        pushButtonStop->setGeometry(QRect(120, 230, 101, 29));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 443, 21));
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
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButtonCon->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisc->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        lineSetAddress->setText(QString());
        labelMin->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        labelMax->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        labelStatus->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
