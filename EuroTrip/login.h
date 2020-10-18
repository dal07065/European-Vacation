#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "user.h"
#include <QLineEdit>
#include <QString>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pushButton_Login_clicked();

    void on_pushButton_NewAccount_clicked();

signals:

    void userIsAdmin();

private:
    Ui::login *ui;
    QVector<User*> admins;
    bool checkCorrectLogin(QString username, QString Password);
    //This is a function to check to see if the user entered in the correct username
    //and password.

    void saveUsersToFile();
    QVector<User*> getUsers();
};

#endif // LOGIN_H
