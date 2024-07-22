#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT
private:
  int contTimer;
  bool flag = false;
public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

public slots:
  void putData();
  void timerStart();
  void timerStop();
  void tcpConnect();
  void tcpDisconnect();
  void timerEvent(QTimerEvent *event);
private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  int temp;
};

#endif // MAINWINDOW_H
