#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QTextToSpeech>
#include <iostream>
#include <QLabel>
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
    QPushButton *btn1;
    QLabel *label;

public slots:
    void on_clicked_slots();
    void on_label_slots();
signals:
    void on_clicked_signals();
};
#endif // WIDGET_H
