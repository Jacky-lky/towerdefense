#ifndef ROUND1_H
#define ROUND1_H

#include <QObject>
#include <QWidget>
#include <QPainter>
#include <QPushButton>
#include <QPaintEvent>
#include <QPixmap>
#include "towerbase.h"

class round1 : public QWidget
{
    Q_OBJECT
public:
    explicit round1(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);

signals:
    void gochoice1();
private:
    QPushButton quit1;
};

#endif // ROUND1_H
