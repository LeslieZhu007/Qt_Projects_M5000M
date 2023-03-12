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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *open_LED;
    QPushButton *close_LED;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        open_LED = new QPushButton(Widget);
        open_LED->setObjectName(QString::fromUtf8("open_LED"));
        open_LED->setGeometry(QRect(40, 40, 80, 20));
        close_LED = new QPushButton(Widget);
        close_LED->setObjectName(QString::fromUtf8("close_LED"));
        close_LED->setGeometry(QRect(30, 100, 80, 20));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        open_LED->setText(QApplication::translate("Widget", "\345\274\200\347\201\257", nullptr));
        close_LED->setText(QApplication::translate("Widget", "\345\205\263\347\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
