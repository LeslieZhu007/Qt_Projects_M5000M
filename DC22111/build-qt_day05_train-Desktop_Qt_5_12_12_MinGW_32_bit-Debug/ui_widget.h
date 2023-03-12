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
    QPushButton *model_training;
    QPushButton *machine_predict;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        model_training = new QPushButton(Widget);
        model_training->setObjectName(QString::fromUtf8("model_training"));
        model_training->setGeometry(QRect(50, 70, 80, 20));
        machine_predict = new QPushButton(Widget);
        machine_predict->setObjectName(QString::fromUtf8("machine_predict"));
        machine_predict->setGeometry(QRect(210, 70, 80, 20));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        model_training->setText(QApplication::translate("Widget", "\346\250\241\345\236\213\350\256\255\347\273\203", nullptr));
        machine_predict->setText(QApplication::translate("Widget", "\346\234\272\345\231\250\351\242\204\346\265\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
