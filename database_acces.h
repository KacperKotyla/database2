#ifndef DATABASE_ACCES_H
#define DATABASE_ACCES_H

#include <QDialog>

namespace Ui {
class database_Acces;
}

class database_Acces : public QDialog
{
    Q_OBJECT

public:
    explicit database_Acces(QWidget *parent = nullptr);
    ~database_Acces();

private:
    Ui::database_Acces *ui;
};

#endif // DATABASE_ACCES_H
