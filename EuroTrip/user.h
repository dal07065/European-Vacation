#ifndef USER_H
#define USER_H
#include<QString>

/*!
 * \brief The User class holds the login information
 */
class User
{
private:
    QString username;/*!< a QString which hold the information of the username*/
    // This is the data memeber that stores the username of a user
    QString password;/*!< a QString which holds the information of the password*/
    // This is the data memeber that stores the password of a user
    bool isAdmin;/*!< a bool variable which determines if the user is an admin or not*/
    // This is the data memeber that is true if the user is an admin
public:
    /*!
     * \brief User is the default contructor
     *
     * generates a user object
     */
    User();
    // Default constructor for the User object

    /*!
     * \brief User is constructor with 3 parameters
     * \param username is a QString
     * \param password is a Qstring
     * \param isAdmin is a boolean
     *
     * this constructor populates the object with the information of a login
     */
    User(QString username, QString password, bool isAdmin);
    // Alternative Constructor for the User object. This constructor
    // allows for the username, password and isAdmin data to be passed
    // into it for initialization.
    ~User();
    // Default Destructor

    /*!
     * \brief getName is a getter function
     * \return a QString
     *
     * function returns the username of the object
     */
    QString getName();
    // This function returns a QString containing the Users objects username

    /*!
     * \brief getPassword is a getter function
     * \return a QString
     *
     * function returns the password of the object
     */
    QString getPassword();
    // This function returns a QString containing the Users objects password

    /*!
     * \brief changePassword is a member function with a parameter
     * \param password is a QString
     *
     * this function replaces the password with the passed in QString
     */
    void changePassword(QString password);
    // This function reads in a QString to be used as the new
    // password for the User object

    /*!
     * \brief adminStatus is a member function
     * \return a boolean variable
     *
     * this function checks if the user is an admin and returns a boolean
     */
    bool adminStatus();
    // This function returns true if the User object is an admin

    /*!
     * \brief correctLogin is a member function with 2 parameters
     * \param username is a QString
     * \param password is a QString
     * \return a boolean
     *
     * this function checks if the login is correct and returns a boolean
     */
    bool correctLogin(QString username, QString password);
    // This function returns true if the passed in QStrings username and
    // password matches the User objects data members username and password
};

#endif // USER_H
