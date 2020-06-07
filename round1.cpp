#include "round1.h"

round1::round1(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(1000,800);
    quit1.setParent(this);
    quit1.setStyleSheet("background-color:lightgreen;");
    quit1.setText("Quit");
    quit1.move(900,700);
    quit1.resize(80,60);
    connect(&quit1,&QPushButton::clicked,[=](){
       this->hide();
       emit gochoice1();
    });
}
void round1::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pixmap(":/images/round1map.jpg");
    painter.drawPixmap(0,0,
                          this->width(),
                          this->height(),pixmap);
}
