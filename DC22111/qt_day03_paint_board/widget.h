#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QPixmap>
#include <iostream>
#include <QPen>
using namespace std;


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
     void mouseMoveEvent(QMouseEvent *event) override;
      void mousePressEvent(QMouseEvent *event) override;
      void paintEvent(QPaintEvent *event) override;

private:
    Ui::Widget *ui;
    QPixmap *pix; //定义画布对象
    QPoint point;
};
#endif // WIDGET_H
