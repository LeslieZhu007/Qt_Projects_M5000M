#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFont>
#include <QColor>
#include <QFontDialog>
#include <QColorDialog>
#include <QTextEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QTextEdit *edit;
public slots:
    void on_fontdialog_slots();
    void on_colordialog_slots();
};
#endif // WIDGET_H
