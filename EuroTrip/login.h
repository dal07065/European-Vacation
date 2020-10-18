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
    // This function sends a signal to mainWindow that
    // the current user is an admin and causes mainWindow
    // to exicute the function userIsAdmin()

private:
    Ui::login *ui;
    QVector<User*> admins;
    // This is the data memeber that stores all of the current user names and passwords
    // that are parsed from the "User.txt" file

    bool checkCorrectLogin(QString username, QString Password);
    //This is a function to check to see if the user entered in the correct username
    //and password.
    void saveUsersToFile();
    // This function adds new user name and password to the "User.txt" file
    QVector<User*> getUsers();
    // This functions reads in all of the user names and passwords from "User.txt"
    // and returns them in a QVector of User pointers.
};

#endif // LOGIN_H
