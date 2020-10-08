#ifndef CITY_H
#define CITY_H

#include <QString>
#include <QVector>
#include <QPair>
#include <QGeoCoordinate>

class City
{
public:
    City();
    //Default constructor for City object

    City(QString name);
    //Alternate constructor for City object

    City(QString name, QString foodName, double foodCost, double distParis, double distBerlin, double tempLatitude, double tempLongitude);
    //Alternate constructor for City object

    void setCityName(QString newName);
    //Function to set the name of the city
    void setDistToParis(double dist);
    //Function to set the distance to paris for the city
    void setDistToBerlin(double dist);
    //Function to set the distance to berlin for the city
    void setLatitude(double input);
    //Function to set the latitude
    void setLongitude(double input);
    //Function to set the longitude
    void setLatDir(QString dir);
    //Function to set the latitude compass direction
    void setLongDir(QString dir);
    //Function to set the longitude compass direction

    double getLatitude();
    //Function to get the latitude
    double getLongitude();
    //Function to get the longitude
    QString getLatDir();
    //Function to get the latitude direction
    QString getLongDir();
    //Function to get the longitude direction

    void addNewFoodItem(QString foodName, double foodCost);
    //Function to add a city food item
    QVector<QPair<QString, double>> getAllFood();
    //Function to return all the food in the city object
    bool noFood()const;
    //Function that returns true if there is no food in city
    void removeFoodItem(QString food);
    //Function to remove a food item
    QString getCityName();
    //Function to return the city name
    double getDistToBerlin();
    //Function to return the distance to berlin
    double getDistToParis();
    //Function to return the distance to paris

    QGeoCoordinate getCoordinates();
    //Function to return coordinates

     QVector<double>& getAllDistances()
         {
             return allDistances;
         }

private:
    QString cityName;
    QVector<QPair<QString, double>> foodInfo;
    QVector<double> allDistances;
    double distanceToParis;
    double distanceToBerlin;

    QString longDir;

    QString latDir;

    //Access Longitude like: coordinates.longitude();
    //Access Latitude like: coordinates.latitude();
    QGeoCoordinate coordinates;

};

#endif // CITY_H

