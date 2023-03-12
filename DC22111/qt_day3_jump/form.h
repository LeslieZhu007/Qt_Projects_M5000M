#ifndef FORM_H
#define FORM_H

#include <QWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private:
    Ui::Form *ui;
public slots:
    void on_show_slots();
private slots:
    void on_form_jump_clicked();
signals:
     void emit_form_jump_signals();

};

#endif // FORM_H
