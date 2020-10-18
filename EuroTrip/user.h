#ifndef USER_H
#define USER_H
#include<QString>

class User
{
private:
    QString username;
    // This is the data memeber that stores the username of a user
    QString password;
    // This is the data memeber that stores the password of a user
    bool isAdmin;
    // This is the data memeber that is true if the user is an admin
public:
    User();
    // Default constructor for the User object
    User(QString username, QString password, bool isAdmin);
    // Alternative Constructor for the User object. This constructor
    // allows for the username, password and isAdmin data to be passed
    // into it for initialization.
    ~User();
    // Default Destructor
    QString getName();
    // This function returns a QString containing the Users objects username
    QString getPassword();
    // This function returns a QString containing the Users objects password
    void changePassword(QString password);
    // This function reads in a QString to be used as the new
    // password for the User object
    bool adminStatus();
    // This function returns true if the User object is an admin
    bool correctLogin(QString username, QString password);
    // This function returns true if the passed in QStrings username and
    // password matches the User objects data members username and password
};

#endif // USER_H
