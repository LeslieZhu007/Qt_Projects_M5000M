/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *open_camera;
    QPushButton *close_camera;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        open_camera = new QPushButton(Widget);
        open_camera->setObjectName(QString::fromUtf8("open_camera"));
        open_camera->setGeometry(QRect(40, 0, 80, 20));
        close_camera = new QPushButton(Widget);
        close_camera->setObjectName(QString::fromUtf8("close_camera"));
        close_camera->setGeometry(QRect(200, 0, 80, 20));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 291, 101));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        open_camera->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", nullptr));
        close_camera->setText(QApplication::translate("Widget", "\345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", nullptr));
        label->setText(QApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
