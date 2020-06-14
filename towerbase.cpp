#include "towerbase.h"
#include <QSize>

towerbase::towerbase():
    QPushButton(0)
{
    this->setFixedSize(100,100);
    setStyleSheet("QPushButton{border-image: "
                  "url(:/images/towerbase.jpg)}");
    this->setContextMenuPolicy(Qt::ActionsContextMenu);
    QAction *action1 =new QAction(this);
    action1->setText("setKing");
    QAction *action2 =new QAction(this);
    action2->setText("setQueen");
    QAction *action3 =new QAction(this);
    action3->setText("Adance");
    QAction *action4 =new QAction(this);
    action4->setText("removeTower");
    this->addAction(action1);
    this->addAction(action2);
    this->addAction(action3);
    this->addAction(action4);
}
