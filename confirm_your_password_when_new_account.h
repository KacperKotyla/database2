#ifndef CONFIRM_YOUR_PASSWORD_WHEN_NEW_ACCOUNT_H
#define CONFIRM_YOUR_PASSWORD_WHEN_NEW_ACCOUNT_H

#include <QDialog>

namespace Ui {
class confirm_your_password_when_new_account;
}

class confirm_your_password_when_new_account : public QDialog
{
    Q_OBJECT

public:
    explicit confirm_your_password_when_new_account(QWidget *parent = nullptr);
    ~confirm_your_password_when_new_account();

private:
    Ui::confirm_your_password_when_new_account *ui;
};

#endif // CONFIRM_YOUR_PASSWORD_WHEN_NEW_ACCOUNT_H
