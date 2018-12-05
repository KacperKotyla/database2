#include "database_acces.h"
#include "ui_database_acces.h"

database_Acces::database_Acces(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::database_Acces)
{
    ui->setupUi(this);
}

database_Acces::~database_Acces()
{
    delete ui;
}
