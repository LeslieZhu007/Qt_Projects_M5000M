#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_show_slots()
{
    this->show();
}

void Form::on_form_jump_clicked()
{
    emit emit_form_jump_signals();
    this->hide();
}

