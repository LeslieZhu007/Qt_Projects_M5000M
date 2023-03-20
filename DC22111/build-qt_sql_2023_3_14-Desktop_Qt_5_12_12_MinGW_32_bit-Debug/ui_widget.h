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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *name_label;
    QLineEdit *name_line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *age_label;
    QLineEdit *age_line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *sex_label;
    QLineEdit *sex_line;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *add_btn;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *text_show;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *show_btn;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 170, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(161, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        name_label = new QLabel(Widget);
        name_label->setObjectName(QString::fromUtf8("name_label"));

        horizontalLayout->addWidget(name_label);

        name_line = new QLineEdit(Widget);
        name_line->setObjectName(QString::fromUtf8("name_line"));

        horizontalLayout->addWidget(name_line);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        age_label = new QLabel(Widget);
        age_label->setObjectName(QString::fromUtf8("age_label"));

        horizontalLayout_2->addWidget(age_label);

        age_line = new QLineEdit(Widget);
        age_line->setObjectName(QString::fromUtf8("age_line"));

        horizontalLayout_2->addWidget(age_line);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        sex_label = new QLabel(Widget);
        sex_label->setObjectName(QString::fromUtf8("sex_label"));

        horizontalLayout_3->addWidget(sex_label);

        sex_line = new QLineEdit(Widget);
        sex_line->setObjectName(QString::fromUtf8("sex_line"));

        horizontalLayout_3->addWidget(sex_line);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        add_btn = new QPushButton(Widget);
        add_btn->setObjectName(QString::fromUtf8("add_btn"));

        horizontalLayout_4->addWidget(add_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_6->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        text_show = new QTextEdit(Widget);
        text_show->setObjectName(QString::fromUtf8("text_show"));

        verticalLayout_2->addWidget(text_show);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        show_btn = new QPushButton(Widget);
        show_btn->setObjectName(QString::fromUtf8("show_btn"));

        horizontalLayout_5->addWidget(show_btn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_6, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(161, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 170, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        name_label->setText(QApplication::translate("Widget", "\345\247\223\345\220\215", nullptr));
        age_label->setText(QApplication::translate("Widget", "\345\271\264\351\276\204", nullptr));
        sex_label->setText(QApplication::translate("Widget", "\346\200\247\345\210\253", nullptr));
        add_btn->setText(QApplication::translate("Widget", "\346\267\273\345\212\240", nullptr));
        show_btn->setText(QApplication::translate("Widget", "\346\230\276\347\244\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
