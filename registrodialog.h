#ifndef REGISTRODIALOG_H
#define REGISTRODIALOG_H

#include <QDialog>

namespace Ui {
class RegistroDialog;
}

class RegistroDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegistroDialog(QWidget *parent = nullptr);
    ~RegistroDialog();

private:
    Ui::RegistroDialog *ui;
};

#endif // REGISTRODIALOG_H
