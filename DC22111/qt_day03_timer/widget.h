#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QTime>
#include <QTimerEvent>
#include <iostream>
#include <QDate>
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


private slots:
    void on_start_timer_clicked();
    void on_start_timer2_clicked();

private:
    Ui::Widget *ui;
    QTimer *timer;
    int timer_ID; //接收启动定时器的返回值
     void timerEvent(QTimerEvent *event) override;
public slots:
    void on_timeout_slots();
};
#endif // WIDGET_H
