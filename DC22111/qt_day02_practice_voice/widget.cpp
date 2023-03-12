#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //自定义y一个按钮，并设置父组件
    btn1 = new QPushButton(this);
    //设置按钮文本
    btn1->setText("Lesle's button");
    //按钮的点击信号与槽函数（关闭页面）进行连接
    connect(btn1,SIGNAL(clicked()),this,SLOT(close()));  //函数需要加括号
    //qt4版本信号和槽不会报错，需要加上括号
    /*************************************************/
    QPushButton *btn2 = new QPushButton(this);
    btn2->setText("Leslie's button2");
    //移动btn2按钮到btn1后面
    btn2->move(QPoint((btn1->width())*2,0));
    //连接
    connect(btn2,&QPushButton::clicked,this,&Widget::on_clicked_slots);

    //创建QLabel对象
    label = new QLabel(this);
    label->move((QPoint(0,(btn1->height())*2)));
    label->setText("what's up,bro? You kow what,we are taking the C++ and Qt lessons,aren't you happy about that?");

    connect(this,&Widget::on_clicked_signals,this,&Widget::on_label_slots);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_clicked_slots()
{
       QTextToSpeech *speech = new QTextToSpeech(this);
       QLocale locale = QLocale(QLocale::English,QLocale::UnitedKingdom);
       speech->setLocale(locale);
       speech->say(btn1->text());

      emit on_clicked_signals();
}

//btn2按钮按下，发射clicked信号，在函数里面手动发射信号
//手动发射信号对应的槽函数里读取文本框中的内容
void Widget::on_label_slots()
{
    QTextToSpeech *speech = new QTextToSpeech(this);
    QLocale locale = QLocale(QLocale::English,QLocale::UnitedStates);
    speech->setLocale(locale);
    speech->say(label->text());

}
