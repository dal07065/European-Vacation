#ifndef ADMIN_H
#define ADMIN_H
#include <QString>

class admin
{
private:
    QString username;
    QString password;
    bool isAdmin;
public:
    admin();
    admin(QString username, QString password, bool isAdmin);
    ~admin();
    QString getName();
    QString getPassword();
    void changePassword(QString password);
    bool adminStatus();
    bool correctLogin(QString username, QString password);

};

#endif // ADMIN_H
