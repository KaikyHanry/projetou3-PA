#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  contTimer = 0;

  ui->labelStatus->setText("Disconnected");

  connect(ui->pushButtonCon,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpConnect()));
  connect(ui->pushButtonDisc,
          SIGNAL(clicked(bool)),
          this,
          SLOT(tcpDisconnect()));
  connect(ui->pushButtonStart,
          SIGNAL(clicked(bool)),
          this,
          SLOT(timerStart()));
  connect(ui->pushButtonStop,
          SIGNAL(clicked(bool)),
          this,
          SLOT(timerStop()));
}

void MainWindow::tcpConnect(){
  QString mString;

  mString = ui->lineSetAddress->text();
  if(flag == false) {
      socket->connectToHost(mString,1234);
      if(socket->waitForConnected(3000)){
          qDebug() << "Connected";
          ui->labelStatus->setText("Connected");
          flag = true;
      }
      else{
          qDebug() << "Disconnected";
          flag = false;
      }
  }
}

void MainWindow::tcpDisconnect() {
    socket->disconnectFromHost();
    qDebug() << "Disconnected";
    ui->labelStatus->setText("Disconnected");
    flag = false;
}

void MainWindow::timerStart() {
    if(contTimer == 0) {
        temp = startTimer(ui->horizontalSliderTiming->value() * 1000);
        contTimer++;
    }
}

void MainWindow::timerStop() {
    killTimer(temp);
    contTimer = 0;
}

void MainWindow::putData(){
  QDateTime datetime;
  QString str;
  qint64 msecdate;
  int max = ui->horizontalSliderMax->value();
  int min = ui->horizontalSliderMin->value();
  qDebug() << min;
  qDebug() << max;
  if(socket->state()== QAbstractSocket::ConnectedState){

    msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
    str = "set "+ QString::number(msecdate) + " " +
          QString::number(rand()% ((max + 1) - min) + min)+"\r\n";

      qDebug() << str;
      qDebug() << socket->write(str.toStdString().c_str())
               << " bytes written";
      if(socket->waitForBytesWritten(3000)){
        qDebug() << "wrote";
      }
      ui->textEditShowData->insertPlainText(str);
  }
}

void MainWindow::timerEvent(QTimerEvent *timer) {
    putData();
}

MainWindow::~MainWindow(){
  delete socket;
  delete ui;
}

