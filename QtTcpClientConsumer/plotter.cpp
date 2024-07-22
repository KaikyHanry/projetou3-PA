#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QDebug>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}
{

}

void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;
    long long timeMax, timeMin;
    int valorMax, valorMin;
    std:: vector<double> valueY, valueX;
    int tam = valor.size();

    brush.setColor(QColor(255, 220, 0));
    brush.setStyle(Qt::SolidPattern);
    pen.setColor(Qt::red);
    pen.setWidth(2);
    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width(), height());

    if(tam < 2) {
        return;
    }

    timeMin = *std::min_element(tempo.begin(), tempo.end());
    timeMax = *std::max_element(tempo.begin(), tempo.end());
    valorMin = *std::min_element(valor.begin(), valor.end());
    valorMax = *std::max_element(valor.begin(), valor.end());

    pen.setColor(QColor(0,0,0));
    painter.setPen(pen);

    for (int i = 0; i < tam; i++) {
        valueX.push_back((tempo[i] - timeMin)* width() / (timeMax - timeMin));
        valueY.push_back((valor[i] - valorMin)* height()/(valorMax - valorMin));
    }

    for(int j = 0; j < tam - 1; j++){
        painter.drawLine(valueX[j],valueY[j], valueX[j+1], valueY[j+1]);
    }
}

void Plotter::setData(std::vector<long long> tempo, std::vector<int> valor)
{
    this->tempo = tempo;
    this->valor = valor;
    repaint();
}
