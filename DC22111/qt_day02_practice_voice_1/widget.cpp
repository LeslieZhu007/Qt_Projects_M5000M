#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
   btn1 = new QPushButton("Yamamoto",this);

   edit = new QLineEdit(this);
  edit->move(QPoint((btn1->width())*4,0));

 label = new QLabel(this);
 label->move(QPoint(btn1->width(),0));

 label->setText("This world is big");

    connect(btn1,&QPushButton::clicked,this,&Widget::on_click_slots);

    connect(this,&Widget::emit_speech_signals,this,&Widget::on_emit_speech_slots);
}

Widget::~Widget()
{
    delete ui;
}

//单击button的槽函数
void Widget::on_click_slots()
{
    cout<<"button1 clicked*********"<<endl;
    emit emit_speech_signals();
}

void Widget::on_emit_speech_slots()
{


    QTextToSpeech *speech = new QTextToSpeech(this);
    speech->say(label->text());
    speech->say(edit->text());
}

