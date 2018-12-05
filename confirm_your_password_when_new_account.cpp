#include "confirm_your_password_when_new_account.h"
#include "ui_confirm_your_password_when_new_account.h"

confirm_your_password_when_new_account::confirm_your_password_when_new_account(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirm_your_password_when_new_account)
{
    ui->setupUi(this);
}

confirm_your_password_when_new_account::~confirm_your_password_when_new_account()
{
    delete ui;
}
