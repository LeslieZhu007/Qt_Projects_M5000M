/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/
//这个文件是对mainwindow.ui编译后生成的一个标准C++文件
//ui_mainwindow.h会出现在编译后的目录下
//或者在建项目的文件里面，取决于是否生存影子目录(shadow)
#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow  //用于封装可视化设计的界面，实现界面功能
{
public:
    QLabel *label;
    QPushButton *pushButton;

    //setupUi用于创建各个界面的组件
    //设置位置 ，大小，文字内容，字体属性
    //设置信号与槽的管理
    void setupUi(QWidget *MainWindow)
    {
        //根据可视化设计的界面内容，使用C++代码创建界面上的组件
        //并设置其属性
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        label = new QLabel(MainWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 100, 71, 31));
        pushButton = new QPushButton(MainWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 160, 80, 20));
        //将界面上的问子设置的内容独立出来作为一个函数
        retranslateUi(MainWindow); //设置标签的问子，按钮的字体，窗口标题
        //在设计多语言界面时会用到这个函数
        QMetaObject::connectSlotsByName(MainWindow); //设置信号与槽
        //设置槽函数的连接方式
        //用于将UI设计器自动生成组件的信号与相应的槽相关联
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {   //定义一个名为Ui的命名空间，并定义了一个名叫MainWindow的累，继承自 Ui_MainWindow
    class MainWindow: public Ui_MainWindow {};
    //MainWindow 用于描述可视化设计的类体，与mainwindow.h中的MainWindow同名
    //在Widget累里面访问Ui::MainWindow类的成员变量或者成员函数需要通过MainWindowli
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
