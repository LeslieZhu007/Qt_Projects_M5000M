#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    /*--------------------------信息调试类----------------------------------*/
    qDebug()<<"hello world"; //相当于cout
    qDebug("num = %d\n",23); //相当于printf
    qDebug()<<QString("%1,%2").arg(520).arg(1314);
    /*--------------------------按钮类--------------------------------*/
    //定义一个按钮，并设置图标以及名称和父组件
    QPushButton *btn1 = new QPushButton(QIcon("D:\\Projects\\QtProjects\\DC22111\\qt_day01_1_first_window\\01.jpg"),"btn0",this);
     qDebug()<<"btn1 size = "<<btn1->size()<<endl;  //按钮的大小
     btn1->setIconSize(QSize(300,90));
     btn1->resize(QSize(400,120));  //重新设置按钮大小
     btn1->move(QPoint(15,15));  //移动按钮位置
     qDebug()<<"btn1 pos = "<<btn1->pos()<<endl; //查看按钮位置
     btn1->setText("leslie button series"); //设置文本内容
     qDebug()<<"btn text = "<<btn1->text();  //获取按钮中的内容
     btn1->setEnabled(false); //设置按钮禁用
     btn1->setDisabled(false); //设置按钮可用
     btn1->setIcon(QIcon("G:/s640x360.png")); //设置按钮图标

      /*--------------------------标签类--------------------------------*/
     QLabel *label = new QLabel(this);
     label->setText("Isoroku Yamamoto");  //设置标签文本
     label->move(QPoint(0,(btn1->height())*2));//移动标签
     label->setFrameStyle(QFrame::HLine | QFrame::Raised|QFrame::Box);  //设置标签风格
     label->setScaledContents(true); //缩放标签内容，以填充所有可用空间
     label->setPixmap(QPixmap("G:/s640x360.png"));

     /*--------------------------行编辑器类--------------------------------*/
     QLineEdit *edit = new QLineEdit("hello world",this);
     edit->move(QPoint((btn1->width())*2,btn1->height()));
     edit->setText("hey man");


     //设置显示模式
     edit->setEchoMode(QLineEdit::Password); //设置行编辑器的显示模式

     edit->setFrame(true);   //设置编辑器框架

     edit->setReadOnly(false); //设置内容只读

     /**********信息提示框****************/
     QMessageBox box(QMessageBox::Information,"information","create success",QMessageBox::Save|QMessageBox::Discard|QMessageBox::Cancel);
     int res = box.exec();
     if (res == QMessageBox::Save) {
         qDebug()<<"save success";
     } else if(res == QMessageBox::Discard)
     {
         qDebug()<<"no save";
     } else
     {
         qDebug()<<"cancel";
     }

     //静态成员函数版本
     QMessageBox::critical(this,"critical","create failure",QMessageBox::Yes|QMessageBox::No);

     QMessageBox::warning(this,"waring","code has problem",QMessageBox::Yes|QMessageBox::No);
     QMessageBox::question(this,"question","are you sure?",QMessageBox::Yes|QMessageBox::No);
}

Widget::~Widget()
{
    delete ui;
}

