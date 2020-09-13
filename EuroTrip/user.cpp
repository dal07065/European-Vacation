#include "user.h"

User::User()
{
    username = "guest";
    password = "guest";
    isAdmin = false;
}


User::User(QString username, QString password, bool isAdmin)
{
    this->username = username;
    this->password = password;
    this->isAdmin = isAdmin;
};

User::~User(){};

QString User::getName()
{
    return username;
}

void User::changePassword(QString password)
{
    this->password = password;
}

bool User::adminStatus()
{
    return isAdmin;
}

bool User::correctLogin(QString username, QString password)
{
    return (this->password == password) && (this->username == username);
}

QString User::getPassword()
{
    return password;
}
