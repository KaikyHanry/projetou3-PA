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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter_10;
    QSplitter *splitter_8;
    QSplitter *splitter_7;
    QLabel *label;
    QLineEdit *lineEditAddress;
    QSplitter *splitter;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QSplitter *splitter_9;
    QListWidget *listWidget;
    QSplitter *splitter_6;
    QSplitter *splitter_4;
    QLabel *labelTxtTiming;
    QPushButton *pushButtonUpdate;
    QSplitter *splitter_5;
    QSplitter *splitter_3;
    QSlider *horizontalSliderTiming;
    QLabel *labelTiming;
    QSplitter *splitter_2;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    Plotter *widget1;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(565, 382);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        widget = new QWidget(centralWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 541, 301));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        splitter_10 = new QSplitter(widget);
        splitter_10->setObjectName("splitter_10");
        splitter_10->setOrientation(Qt::Vertical);
        splitter_8 = new QSplitter(splitter_10);
        splitter_8->setObjectName("splitter_8");
        splitter_8->setOrientation(Qt::Vertical);
        splitter_7 = new QSplitter(splitter_8);
        splitter_7->setObjectName("splitter_7");
        splitter_7->setOrientation(Qt::Vertical);
        label = new QLabel(splitter_7);
        label->setObjectName("label");
        splitter_7->addWidget(label);
        lineEditAddress = new QLineEdit(splitter_7);
        lineEditAddress->setObjectName("lineEditAddress");
        splitter_7->addWidget(lineEditAddress);
        splitter_8->addWidget(splitter_7);
        splitter = new QSplitter(splitter_8);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        pushButtonConnect = new QPushButton(splitter);
        pushButtonConnect->setObjectName("pushButtonConnect");
        splitter->addWidget(pushButtonConnect);
        pushButtonDisconnect = new QPushButton(splitter);
        pushButtonDisconnect->setObjectName("pushButtonDisconnect");
        splitter->addWidget(pushButtonDisconnect);
        splitter_8->addWidget(splitter);
        splitter_10->addWidget(splitter_8);
        splitter_9 = new QSplitter(splitter_10);
        splitter_9->setObjectName("splitter_9");
        splitter_9->setOrientation(Qt::Vertical);
        listWidget = new QListWidget(splitter_9);
        listWidget->setObjectName("listWidget");
        splitter_9->addWidget(listWidget);
        splitter_6 = new QSplitter(splitter_9);
        splitter_6->setObjectName("splitter_6");
        splitter_6->setOrientation(Qt::Vertical);
        splitter_4 = new QSplitter(splitter_6);
        splitter_4->setObjectName("splitter_4");
        splitter_4->setOrientation(Qt::Horizontal);
        labelTxtTiming = new QLabel(splitter_4);
        labelTxtTiming->setObjectName("labelTxtTiming");
        splitter_4->addWidget(labelTxtTiming);
        pushButtonUpdate = new QPushButton(splitter_4);
        pushButtonUpdate->setObjectName("pushButtonUpdate");
        splitter_4->addWidget(pushButtonUpdate);
        splitter_6->addWidget(splitter_4);
        splitter_5 = new QSplitter(splitter_6);
        splitter_5->setObjectName("splitter_5");
        splitter_5->setOrientation(Qt::Vertical);
        splitter_3 = new QSplitter(splitter_5);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setOrientation(Qt::Horizontal);
        horizontalSliderTiming = new QSlider(splitter_3);
        horizontalSliderTiming->setObjectName("horizontalSliderTiming");
        horizontalSliderTiming->setMinimum(1);
        horizontalSliderTiming->setMaximum(5);
        horizontalSliderTiming->setOrientation(Qt::Horizontal);
        splitter_3->addWidget(horizontalSliderTiming);
        labelTiming = new QLabel(splitter_3);
        labelTiming->setObjectName("labelTiming");
        splitter_3->addWidget(labelTiming);
        splitter_5->addWidget(splitter_3);
        splitter_2 = new QSplitter(splitter_5);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Horizontal);
        pushButtonStart = new QPushButton(splitter_2);
        pushButtonStart->setObjectName("pushButtonStart");
        splitter_2->addWidget(pushButtonStart);
        pushButtonStop = new QPushButton(splitter_2);
        pushButtonStop->setObjectName("pushButtonStop");
        splitter_2->addWidget(pushButtonStop);
        splitter_5->addWidget(splitter_2);
        splitter_6->addWidget(splitter_5);
        splitter_9->addWidget(splitter_6);
        splitter_10->addWidget(splitter_9);

        horizontalLayout->addWidget(splitter_10);

        widget1 = new Plotter(widget);
        widget1->setObjectName("widget1");

        horizontalLayout->addWidget(widget1);

        horizontalLayout->setStretch(0, 40);
        horizontalLayout->setStretch(1, 60);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 565, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderTiming, &QSlider::valueChanged, labelTiming, qOverload<int>(&QLabel::setNum));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "IP do Servidor", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        labelTxtTiming->setText(QCoreApplication::translate("MainWindow", "Timing", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        labelTiming->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
