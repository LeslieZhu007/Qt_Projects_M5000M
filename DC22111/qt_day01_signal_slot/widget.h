#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<iostream>
#include <QPushButton>
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

private:
    Ui::Widget *ui;
public slots:
    void on_clicked_slots();//自定义槽函数
public slots:
    void on_pushButton_clicked();
signals:
};
#endif // WIDGET_H
