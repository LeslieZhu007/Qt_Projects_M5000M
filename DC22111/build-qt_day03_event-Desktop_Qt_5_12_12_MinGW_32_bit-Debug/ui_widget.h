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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *key_press;
    QLabel *key_release;
    QLabel *mouse_cliecked;
    QLabel *mouse_released;
    QLabel *mouse_double_clicked;
    QLabel *mouse_move;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        key_press = new QLabel(Widget);
        key_press->setObjectName(QString::fromUtf8("key_press"));
        key_press->setGeometry(QRect(60, 10, 321, 41));
        key_release = new QLabel(Widget);
        key_release->setObjectName(QString::fromUtf8("key_release"));
        key_release->setGeometry(QRect(50, 100, 331, 41));
        mouse_cliecked = new QLabel(Widget);
        mouse_cliecked->setObjectName(QString::fromUtf8("mouse_cliecked"));
        mouse_cliecked->setGeometry(QRect(50, 180, 361, 31));
        mouse_released = new QLabel(Widget);
        mouse_released->setObjectName(QString::fromUtf8("mouse_released"));
        mouse_released->setGeometry(QRect(50, 230, 331, 21));
        mouse_double_clicked = new QLabel(Widget);
        mouse_double_clicked->setObjectName(QString::fromUtf8("mouse_double_clicked"));
        mouse_double_clicked->setGeometry(QRect(50, 290, 371, 21));
        mouse_move = new QLabel(Widget);
        mouse_move->setObjectName(QString::fromUtf8("mouse_move"));
        mouse_move->setGeometry(QRect(50, 360, 341, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        key_press->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        key_release->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        mouse_cliecked->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        mouse_released->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        mouse_double_clicked->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        mouse_move->setText(QApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
