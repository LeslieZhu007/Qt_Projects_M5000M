#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    openUart();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::openUart()
{
      QString name = "com1"; //创建端口名称
      port = new QSerialPort(name,this); //设置端口
      port->setBaudRate(QSerialPort::Baud9600); //设置波特率
      port->setParity(QSerialPort::NoParity);  //设置校验位
      port->setDataBits(QSerialPort::Data8); //设置数据位
      port->setStopBits(QSerialPort::OneStop); //设置停止位
      port->setFlowControl(QSerialPort::NoFlowControl);//设置流控制位
      if (port->open(QIODevice::ReadWrite)) {
          QMessageBox::information(this,"Uart","uart open ok");
      } else
      {
          QMessageBox::warning(this,"Uart","uart open failure");
      }
}


void Widget::on_open_LED_clicked()
{
    char cmd = '0';
    port->write(&cmd,1); //开灯
}


void Widget::on_close_LED_clicked()
{
    char cmd = '1';
    port->write(&cmd,1); //关灯
}

