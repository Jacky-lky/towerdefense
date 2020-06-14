#include "round2.h"

round2::round2(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(800,800);
    quit2.setParent(this);
    quit2.setStyleSheet("background-color:lightgreen;");
    quit2.setText("Quit");
    quit2.move(720,740);
    quit2.resize(80,60);
    connect(&quit2,&QPushButton::clicked,[=](){
       this->hide();
       emit gochoice2();
    });
    towerbase *base1 = new towerbase;
    base1->setParent(this);
    base1->move(100,100);
    towerbase *base2 = new towerbase;
    base2->setParent(this);
    base2->move(300,100);
    towerbase *base3 = new towerbase;
    base3->setParent(this);
    base3->move(500,300);
    towerbase *base4 = new towerbase;
    base4->setParent(this);
    base4->move(600,300);
    towerbase *base5 = new towerbase;
    base5->setParent(this);
    base5->move(100,500);
    towerbase *base6 = new towerbase;
    base6->setParent(this);
    base6->move(300,500);
    towerbase *base7 = new towerbase;
    base7->setParent(this);
    base7->move(500,600);
    towerbase *base8 = new towerbase;
    base8->setParent(this);
    base8->move(600,600);
}
void round2::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pixmap(":/images/round2map.jpg");
    painter.drawPixmap(0,0,
                          this->width(),
                          this->height(),pixmap);
}
