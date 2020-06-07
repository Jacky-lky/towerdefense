#include "startpage.h"
#include "ui_startpage.h"

Startpage::Startpage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Startpage)
{
    this->setFixedSize(1000,800);
    ui->setupUi(this);
    start.setParent(this);
    start.setStyleSheet("background-color:lightgreen;");
    start.setText("Start");
    start.move(400,400);
    start.resize(80,60);
    connect(&start,&QPushButton::clicked,[=](){
       this->hide();
        choice1.show();
    });
    connect(&choice1,&choicepage1::goforward,[=](){
        choice1.hide();
        choice2.show();
    });
    connect(&choice1,&choicepage1::game1start,[=](){
        choice1.hide();
        r1.show();
    });
    connect(&choice2,&choicepage2::goback,[=](){
        choice2.hide();
        choice1.show();
    });
    connect(&choice2,&choicepage2::game2start,[=](){
        choice2.hide();
        r2.show();
    });
    connect(&r2,&round2::gochoice2,[=](){
        r2.hide();
        choice2.show();
    });
    connect(&r1,&round1::gochoice1,[=](){
        r1.hide();
        choice1.show();
    });
}

Startpage::~Startpage()
{
    delete ui;
}
void Startpage::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pixmap(":/images/startmap.jpg");
    painter.drawPixmap(0,0,
                          this->width(),
                          this->height(),pixmap);
}
