#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("QQ"); //设置窗口的标题
    this->setWindowIcon(QIcon(":/pic/Qt.png"));
    ui->logo_label->setPixmap(QPixmap(":/pic/logo.png"));


    ui->user_label->setFixedSize(QSize(30,30)); //设置用户标签的固定尺寸
    ui->pwd_label->setFixedSize(QSize(30,30)); //设置密码标签的固定尺寸
    ui->user_label->setPixmap(QPixmap(":/pic/qq.png"));  //设置用户标签图标
    ui->pwd_label->setPixmap(QPixmap(":/pic/passwd.jpg")); //设置密码标签图标
    ui->user_label->setScaledContents(true); //缩放标签内的内容，填充
    ui->pwd_label->setScaledContents(true); //缩放标签内的内容，填充
    ui->passwd->setEchoMode(QLineEdit::Password); //设置密码不可见
    ui->login->setIcon(QIcon(":/pic/login.png")); //设置登录按钮的图标
    ui->logout->setIcon(QIcon(":/pic/cancel.png")); //设置取消按钮的图标

    connect(ui->login,&QPushButton::clicked,this,&Widget::on_login_slots);
    connect(ui->logout,&QPushButton::clicked,this,&Widget::on_cancel_slots);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_login_slots()
{
    QString username = ui->username->text(); //获取用户名称
    QString password = ui->passwd->text(); //获取密码
    if (username=="admin" && password == "123456") {
        QMessageBox::information(this,"information","log in success",QMessageBox::Ok);

    } else
    {
        QMessageBox box2(QMessageBox::Critical,"error","log in failure",QMessageBox::Yes|QMessageBox::No);
        int ret =box2.exec();
        if(ret == QMessageBox::Yes)
        {
            ui->username->clear();
            ui->passwd->clear();
        } else if(ret == QMessageBox::No)
        {
            this->close();
        }
    }
}

void Widget::on_cancel_slots()
{
    QMessageBox  box(QMessageBox::Icon::Question,"question","Are you sure?",\
                     QMessageBox::StandardButton::Ok| QMessageBox::StandardButton::No);
    int  ret = box.exec();
    if (QMessageBox::StandardButton::Ok == ret) {
        this->close();
    } else {

    }

}

