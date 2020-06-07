#ifndef ENDPAGE_H
#define ENDPAGE_H

#include <QObject>
#include <QWidget>
#include <QPainter>
#include <QPushButton>
#include <QPaintEvent>
#include <QPixmap>

class endpage : public QWidget
{
    Q_OBJECT
public:
    explicit endpage(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);

signals:

private:
    QPushButton endgame;
};

#endif // ENDPAGE_H
