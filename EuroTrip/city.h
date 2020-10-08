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
    City(QString name, QString foodName, double foodCost, double distParis, double distBerlin, double tempLatitude, double tempLongitude);
    void setCityName(QString newName);
    void setDistToParis(double dist);
    void setDistToBerlin(double dist);

    void setLatitude(double input);
    void setLongitude(double input);
    void setLatDir(QString dir);
    void setLongDir(QString dir);

    double getLatitude();
    double getLongitude();
    QString getLatDir();
    QString getLongDir();

    void addNewFoodItem(QString foodName, double foodCost);
    QVector<QPair<QString, double>> getAllFood();
    QString getCityName();
    double getDistToBerlin();
    double getDistToParis();

     QGeoCoordinate getCoordinates();

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

