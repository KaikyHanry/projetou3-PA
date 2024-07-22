#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <vector>

class Plotter : public QWidget
{
    Q_OBJECT
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);

    std::vector <long long> tempo;
    std::vector <int> valor;
public slots:
    void setData(std::vector <long long> tempo, std::vector <int> valor);
signals:
};

#endif // PLOTTER_H
