#include "round1.h"
#include <QDebug>

round1::round1(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(800,800);
    quit1.setParent(this);
    quit1.setStyleSheet("background-color:lightgreen;");
    quit1.setText("Quit");
    quit1.move(720,740);
    quit1.resize(80,60);
    connect(&quit1,&QPushButton::clicked,[=](){
        this->hide();
        emit gochoice1();
    });
    towerbase *base1 = new towerbase;
    base1->setParent(this);
    base1->move(100,100);
    towerbase *base2 = new towerbase;
    base2->setParent(this);
    base2->move(300,100);
    towerbase *base3 = new towerbase;
    base3->setParent(this);
    base3->move(500,100);
    towerbase *base4 = new towerbase;
    base4->setParent(this);
    base4->move(600,100);
    towerbase *base5 = new towerbase;
    base5->setParent(this);
    base5->move(100,500);
    towerbase *base6 = new towerbase;
    base6->setParent(this);
    base6->move(300,500);
    towerbase *base7 = new towerbase;
    base7->setParent(this);
    base7->move(500,500);
    towerbase *base8 = new towerbase;
    base8->setParent(this);
    base8->move(600,500);
}
void round1::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pixmap(":/images/round2map.jpg");
    painter.drawPixmap(0,0,
                          this->width(),
                          this->height(),pixmap);
}
