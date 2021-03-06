#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "confirm_your_password_when_new_account.h"
#include <stdlib.h>
#include <iostream>
#include<QString>
#include "hash_the_password.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

  ui->setupUi(this);
  QString password =  ui->passwordTextLine->text();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_goToConfirmPassword_clicked()
{
    confirm_your_password_when_new_account show_second_login_page;
    show_second_login_page.setModal(true);
    show_second_login_page.exec();
}





