#include "dialog.h"
#include "./ui_dialog.h"
#include <QString>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

QString username;
QString password;

QString admin = "admin";
QString adminPassw = "Pa$$w0rd!";

void Dialog::on_loginBtn_clicked(){

    if ((ui->leEmail->text() == username) && (ui->lePassword->text() == password)){
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Information);
        msgBox.setText("Login Successful!\nWelcome back " + username.toUpper());
        msgBox.exec();
    }
    if ((ui->leEmail->text() == admin) && (ui->lePassword->text() == adminPassw)){
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Information);
        msgBox.setText("Login Successful!\nWelcome back " + admin.toUpper());
        msgBox.exec();
    }
    if ((ui->leEmail->text() != username) || (ui->lePassword->text() != password)) {
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setText("User could not found. Please try again\nNew user? Register now!");
        msgBox.exec();
    }

}


void Dialog::on_registerBtn_clicked(){
    username = ui->leEmail->text();
    if (ui->lePassword->text().length() < 8){
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setText("Password must be at least 8 digits long!");
        msgBox.exec();
    }
    else {
        password = ui->lePassword->text();


        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Information);
        msgBox.setText("Register Successful!");
        msgBox.exec();
    }
}

