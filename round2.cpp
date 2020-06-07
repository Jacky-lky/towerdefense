#include "round2.h"

round2::round2(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(1000,800);
    quit2.setParent(this);
    quit2.setStyleSheet("background-color:lightgreen;");
    quit2.setText("Quit");
    quit2.move(900,700);
    quit2.resize(80,60);
    connect(&quit2,&QPushButton::clicked,[=](){
       this->hide();
       emit gochoice2();
    });
}
void round2::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pixmap(":/images/round2map.jpg");
    painter.drawPixmap(0,0,
                          this->width(),
                          this->height(),pixmap);
}
