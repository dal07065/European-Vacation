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

/*!
 * \brief The login class is subclass of QDialog that implement the login ui
 */
class login : public QDialog
{
    Q_OBJECT

public:
    /*!
     * \brief login is a constructor with a parameter
     * \param parent is a pointer of type QWidget
     *
     * this constructor generates a new QWidget for login
     */
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    /*!
     * \brief on_pushButton_Login_clicked is a member function
     *
     * verifies username and password and give access accordingly to their status
     */
    void on_pushButton_Login_clicked();

    /*!
     * \brief on_pushButton_NewAccount_clicked is a member function
     *
     * allows user to create a new account and stores their information for a future login
     */
    void on_pushButton_NewAccount_clicked();

signals:
    /*!
     * \brief userIsAdmin is a member function
     *
     * function verifies user is an admin and gives new ui options such as changing data
     */
    void userIsAdmin();
    // This function sends a signal to mainWindow that
    // the current user is an admin and causes mainWindow
    // to exicute the function userIsAdmin()

private:
    Ui::login *ui; /*!< a pointer of object login*/
    QVector<User*> admins;/*!< a QVector of object User that stores all user names and passwords*/
    // This is the data memeber that stores all of the current user names and passwords
    // that are parsed from the "User.txt" file

    /*!
     * \brief checkCorrectLogin is a member function with 2 parameters
     * \param username is a QString
     * \param Password is a QString
     * \return a boolean variable determining if the information is correct
     *
     * this function takes in a username and password and verifies that they are a registered user and the information is correct
     */
    bool checkCorrectLogin(QString username, QString Password);
    //This is a function to check to see if the user entered in the correct username
    //and password.

    /*!
     * \brief saveUsersToFile is a member function
     *
     * this functions adds a new user name and password to the "User.tct" file
     */
    void saveUsersToFile();
    // This function adds new user name and password to the "User.txt" file

    /*!
     * \brief getUsers is a member function
     * \return a QVector of object users
     *
     * this function reads in all user names and passwords located in "User.txt" and returns them in a QVector
     */
    QVector<User*> getUsers();
    // This functions reads in all of the user names and passwords from "User.txt"
    // and returns them in a QVector of User pointers.
};

#endif // LOGIN_H
