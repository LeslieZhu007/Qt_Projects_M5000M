/********************************************************************************
** Form generated from reading UI file 'mywnd.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWND_H
#define UI_MYWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWnd
{
public:
    QPushButton *yfs;

    void setupUi(QWidget *MyWnd)
    {
        if (MyWnd->objectName().isEmpty())
            MyWnd->setObjectName(QString::fromUtf8("MyWnd"));
        MyWnd->resize(471, 374);
        yfs = new QPushButton(MyWnd);
        yfs->setObjectName(QString::fromUtf8("yfs"));
        yfs->setGeometry(QRect(160, 80, 171, 91));
        QFont font;
        font.setPointSize(25);
        yfs->setFont(font);

        retranslateUi(MyWnd);

        QMetaObject::connectSlotsByName(MyWnd);
    } // setupUi

    void retranslateUi(QWidget *MyWnd)
    {
        MyWnd->setWindowTitle(QApplication::translate("MyWnd", "MyWnd", nullptr));
        yfs->setText(QApplication::translate("MyWnd", "login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWnd: public Ui_MyWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWND_H
