#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    db=QSqlDatabase::addDatabase("QSQLITE");//添加驱动
    db.setDatabaseName("stu.db");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_add_btn_clicked()
{
    bool ret = db.open(); //打开创建数据库
    if (ret) {
        qDebug()<<"database open success";
        //创建表

    } else
    {
        qDebug()<<db.lastError().text();
        exit(-1);
    }
    QSqlQuery query;
    query.exec();
}

