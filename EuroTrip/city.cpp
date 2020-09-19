#include "city.h"

City::City()
{
    cityName = "NONE";
    QPair<QString, double> input;
    input.first = "NONE";
    input.second = 0.00; //The price of the food
    distanceToParis = 0;
    distanceToBerlin = 0;
    coordinates.setLatitude(0.0);
    coordinates.setLongitude(0.0);

    foodInfo.push_front(input);

}

City::City(QString name, QString foodName, double foodCost, double distParis, double distBerlin, double tempLatitude, double tempLongitude)
{
    cityName = name;
    distanceToParis = distParis;
    distanceToBerlin = distBerlin;
    coordinates.setLatitude(tempLatitude);
    coordinates.setLongitude(tempLongitude);
    QPair<QString, double> input(foodName, foodCost);

    foodInfo.push_front(input);
}

void City::setCityName(QString newName)
{
    cityName = newName;
}

void City::setDistToParis(double dist)
{
    distanceToParis = dist;
}

void City::setDistToBerlin(double dist)
{
    distanceToBerlin = dist;
}

double City::getDistToParis()
{
    return distanceToParis;
}

double City::getDistToBerlin()
{
    return distanceToBerlin;
}

void City::setLatitude(double input)
{
     coordinates.setLatitude(input);
}

void City::setLongitude(double input)
{
    coordinates.setLongitude(input);
}

double City::getLatitude()
{
    return coordinates.latitude();
}

double City::getLongitude()
{
    return coordinates.longitude();
}

void City::setLatDir(QString dir)
{
    latDir = dir;
}

void City::setLongDir(QString dir)
{
    longDir = dir;
}

QString City::getLatDir()
{
    return latDir;
}

QString City::getLongDir()
{
    return longDir;
}

 QGeoCoordinate City::getCoordinates()
 {
     return coordinates;
 }

void City::addNewFoodItem(QString foodName, double foodCost)
{
    QPair<QString, double> input(foodName, foodCost);
    foodInfo.push_back(input);
}


QVector<QPair<QString, double>> City::getAllFood()
{
    return foodInfo;
}

 QString City::getCityName()
 {
     return cityName;
 }


