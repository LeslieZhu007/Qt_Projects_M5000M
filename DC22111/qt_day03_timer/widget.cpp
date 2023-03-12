#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&Widget::on_timeout_slots);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_timeout_slots()
{
     QTime currentime = QTime::currentTime();
     QString string = currentime.toString("hh:mm:ss");//将时间类型转化为字符串
     ui->label1->setText(string); //将字符串放到ui中的 label1进行显示
}


void Widget::on_start_timer_clicked()
{
    if (ui->start_timer->text() == "start") {
           timer->start(1000);   //1s时间到就触发信号
           ui->start_timer->setText("stop");

    } else if (ui->start_timer->text() == "stop")
    {
        timer->stop();
        ui->start_timer->setText("start");
    }
}



void Widget::on_start_timer2_clicked() //通过start按钮go to slots生成的槽函数
{
    if (ui->start_timer2->text() =="start") {
         timer_ID = startTimer(1000);
        ui->start_timer2->setText("stop");
    } else if(ui->start_timer2->text() =="stop")
    {
        killTimer(timer_ID);
        ui->start_timer2->setText("start");
    }
}

void Widget::timerEvent(QTimerEvent *event)
{
   // cout<<"1ls"<<endl;
    QDateTime currentdate_time = QDateTime::currentDateTime();//接收当前实时日期
    QString string = currentdate_time.toString("ddd MMMM d yy"); //将日期类型转换为字符串类型
    ui->label2->setText(string); //将字符串放到ui中的label2中进行显示
}

