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
    QPushButton *start_timer;
    QLabel *label1;
    QPushButton *start_timer2;
    QLabel *label2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        start_timer = new QPushButton(Widget);
        start_timer->setObjectName(QString::fromUtf8("start_timer"));
        start_timer->setGeometry(QRect(9, 30, 121, 41));
        label1 = new QLabel(Widget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(210, 30, 181, 41));
        start_timer2 = new QPushButton(Widget);
        start_timer2->setObjectName(QString::fromUtf8("start_timer2"));
        start_timer2->setGeometry(QRect(10, 100, 131, 41));
        label2 = new QLabel(Widget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(210, 100, 171, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        start_timer->setText(QApplication::translate("Widget", "start", nullptr));
        label1->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        start_timer2->setText(QApplication::translate("Widget", "start", nullptr));
        label2->setText(QApplication::translate("Widget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
