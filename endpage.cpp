#include "endpage.h"

endpage::endpage(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(1000,800);
    endgame.setParent(this);
    endgame.setStyleSheet("background-color:lightgreen;");
    endgame.setText("End");
    endgame.move(400,400);
    endgame.resize(80,60);
    connect(&endgame,&QPushButton::clicked,[=](){
       this->hide();
    });
}
void endpage::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pixmap(":/images/endmap.jpg");
    painter.drawPixmap(0,0,
                          this->width(),
                          this->height(),pixmap);
}
