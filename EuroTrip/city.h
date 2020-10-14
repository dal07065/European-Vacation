#ifndef CITY_H
#define CITY_H

#include <QString>
#include <QVector>
#include <QPair>
#include <QGeoCoordinate>
/*!
 * \brief The City class holds information about the city
 */
class City
{
public:
    /*!
     * \brief City default constructor
     */
    City();
    //Default constructor for City object

    /*!
     * \brief City constructor
     * \param name a QString variable
     * sets the name of the city to the object
     */
    City(QString name);
    //Alternate constructor for City object

    /*!
     * \brief City constructor
     * \param name is a QString
     * \param foodName is a double
     * \param foodCost is a double
     * \param distParis is a double
     * \param distBerlin is a double
     * \param tempLatitude is a double
     * \param tempLongitude is a double
     * sets all the information of the city
     */
    City(QString name, QString foodName, double foodCost, double distParis, double distBerlin, double tempLatitude, double tempLongitude);
    //Alternate constructor for City object

    /*!
     * \brief setCityName is a setter function
     * \param newName is a QString
     */
    void setCityName(QString newName);

    /*!
     * \brief setDistToParis is a setter function
     * \param dist is a double
     */
    void setDistToParis(double dist);

    /*!
     * \brief setDistToBerlin is a setter function
     * \param dist is a double
     */
    void setDistToBerlin(double dist);

    /*!
     * \brief setLatitude is a setter function
     * \param input is a double
     */
    void setLatitude(double input);

    /*!
     * \brief setLongitude is a setter
     * \param input is a double
     */
    void setLongitude(double input);

    /*!
     * \brief setLatDir is a setter
     * \param dir is a QString
     */
    void setLatDir(QString dir);

    /*!
     * \brief setLongDir is a setter function
     * \param dir is a QString
     */
    void setLongDir(QString dir);

    /*!
     * \brief getLatitude is a getter function
     * \return a double which is the latitude
     */
    double getLatitude();

    /*!
     * \brief getLongitude is a getter function
     * \return a double which is the longitude
     */
    double getLongitude();

    /*!
     * \brief getLatDir is a getter function
     * \return a double which is the latitude direction
     */
    QString getLatDir();

    /*!
     * \brief getLongDir is a getter function
     * \return a double which is the longitude direction
     */
    QString getLongDir();

    /*!
     * \brief addNewFoodItem is a member function which takes in two parameters
     * \param foodName is a QString
     * \param foodCost is a double
     * adds a new food item and its price to the city
     */
    void addNewFoodItem(QString foodName, double foodCost);

    /*!
     * \brief getAllFood is a regular member function
     * \return a Qvector<QString,double>
     * function used to return all the food in the city object
     */
    QVector<QPair<QString, double>> getAllFood();

    /*!
     * \brief noFood is a constant member function
     * \return bool variable
     * returns true if food is empty else false
     */
    bool noFood()const;

    /*!
     * \brief removeFoodItem is a regular member function that takes in a parameter
     * \param food is a QString
     * locates the food to be deleted and deletes it from the city object
     */
    void removeFoodItem(QString food);

    /*!
     * \brief changeFoodCost is a regular member function that takes in two parameters
     * \param food is a QString
     * \param price is a double
     * functions finds the food to be edited and changes the price
     */
    void changeFoodCost(QString food, double price);

    /*!
     * \brief getCityName is a getter function
     * \return QString
     * returns the name of the city
     */
    QString getCityName();

    /*!
     * \brief getDistToBerlin is a getter function
     * \return a double
     * returns the distances from this city to the city of berlin
     */
    double getDistToBerlin();

    /*!
     * \brief getDistToParis is a getter function
     * \return a double
     * returns the distance from this city to paris
     */
    double getDistToParis();

    /*!
     * \brief getCoordinates is a getter function
     * \return a QGeoCoordinates
     * returns the coordinates of this city
     */
    QGeoCoordinate getCoordinates();

    /*!
      * \brief getAllDistances is a member function
      * \return a QVector<double>
      * function returns a QVector of all the distances of this object to other cities
      */
     QVector<double>& getAllDistances()
         {
             return allDistances;
         }

     /*!
      * \brief getDistance is a member function that takes in one parameter
      * \param cityName is a QString
      * \return a double
      * this function returns the distance from this object to the city specified in the parameter
      */
     double getDistance(QString cityName);

private:
    QString cityName; /*!< a QString which contains the name of the city */
    QVector<QPair<QString, double>> foodInfo; /*!< a Qvector QPair of type QString and double which contains the list of food and its prices for this city */
    QVector<double> allDistances; /*< a Qvector of type double which contains a list of distances to multiple cities from this city */
    double distanceToParis;/*< a double which contains the distance from this city to paris*/
    double distanceToBerlin;/*< a double which contains the distance from this city to berlin*/

    QString longDir;/*< a QString which contains the cardinal direction of the longitude*/

    QString latDir;/*< a QString which contains the cardinal directoin of the latitude*/

    //Access Longitude like: coordinates.longitude();
    //Access Latitude like: coordinates.latitude();
    QGeoCoordinate coordinates;/*< a QGeoCoordinate which contains the coordinates of this city*/

};

#endif // CITY_H

