#ifndef ROUND2_H
#define ROUND2_H

#include <QObject>
#include <QWidget>
#include <QPainter>
#include <QPushButton>
#include <QPaintEvent>
#include <QPixmap>

class round2 : public QWidget
{
    Q_OBJECT
public:
    explicit round2(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);

signals:
    void gochoice2();
private:
    QPushButton quit2;
};

#endif // ROUND2_H
