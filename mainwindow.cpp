#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/home/mikkel/RentaFacil/Recursos/user.png");
    ui -> label_imgUser ->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    QPixmap pix2("/home/mikkel/RentaFacil/Recursos/inicio2.jpg");
    ui -> label_Inicio ->setPixmap(pix2.scaled(350,450,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_IniciarSesion_clicked()
{
 QString username = ui -> lineEdit_Usuario -> text();
 QString password = ui -> lineEdit_password -> text();
if(username == "admin" && password == "admin")
{
    QMessageBox :: information(this, "Login", "Bienvenido Administrador" );
    hide();
    registro = new RegistroDialog(this);
    registro -> show();

}
else
{
    QMessageBox :: warning(this, "Login", "Usuario o contraseña incorrecta");
}

}



void MainWindow::on_pushButton_Resgistro_clicked()
{
    hide();
    registro = new RegistroDialog(this);
    registro -> show();
}
