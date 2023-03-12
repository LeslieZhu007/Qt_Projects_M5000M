#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <iostream>
#include <QPushButton>
#include <QtTextToSpeech>
#include <QLineEdit>
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
     QLineEdit * edit;
      QLabel *label ;
public slots:
    void on_click_slots();
    void on_emit_speech_slots();
signals:
    void emit_speech_signals();
};
#endif // WIDGET_H
