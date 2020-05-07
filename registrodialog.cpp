#include "registrodialog.h"
#include "ui_registrodialog.h"

RegistroDialog::RegistroDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistroDialog)
{
    ui->setupUi(this);
}

RegistroDialog::~RegistroDialog()
{
    delete ui;
}
