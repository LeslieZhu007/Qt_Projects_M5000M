#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton *btn1 = new QPushButton("btn1",this); //定义按钮启动字体对话框
    QPushButton *btn2 = new QPushButton("btn2",this); //定义按钮启动颜色对话框
    btn2->move(QPoint(btn1->width(),0)); //移动按钮2到按钮1后面
    connect(btn1,&QPushButton::clicked,this,&Widget::on_fontdialog_slots);//点击按钮1执行的槽函数
    connect(btn2,&QPushButton::clicked,this,&Widget::on_colordialog_slots); //点击按钮2执行的槽函数
    edit = new QTextEdit(this); //创建一个文本编辑框
    edit->move(QPoint(0,btn1->height())); //移动文本编辑框到按钮1的下面
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_fontdialog_slots() //自定义槽函数执行对话框
{
     bool ok;
     QFont font = QFontDialog::getFont(&ok,QFont("Times",12),this,"font");
     //设置对话框
     if (ok) {
         this->edit->setFont(font); //给文本编辑框设置字体
     } else
     {

     }
}

void Widget::on_colordialog_slots() //自定义槽函数执行颜色对话框
{
    //设置颜色对话框
      QColor color = QColorDialog::getColor(Qt::blue,this,"color");
      this->edit->setTextColor(color); //给文本编辑框设置颜色
}

