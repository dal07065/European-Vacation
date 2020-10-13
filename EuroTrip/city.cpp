#include "city.h"

City::City()
{
    cityName = "NONE";
    QPair<QString, double> input;

    distanceToParis = 0;
    distanceToBerlin = 0;
    coordinates.setLatitude(0.0);
    coordinates.setLongitude(0.0);
    for(int i = 0; i < 13; i++)
        {
            allDistances.push_back(0);
        }
}

City::City(QString name)
{
    cityName = name;

    distanceToParis = 0;
    distanceToBerlin = 0;
    coordinates.setLatitude(0.0);
    coordinates.setLongitude(0.0);
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
    for(int i = 0; i < 13; i++)
        {
            allDistances.push_back(0);
        }
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

bool City::noFood()const
{
    return foodInfo.isEmpty();
}

void City::removeFoodItem(QString food)
{
    int loop = 0;
    bool notFound = true;

    while(loop < foodInfo.size() && notFound)
    {
        if(foodInfo[loop].first == food)
        {
            foodInfo.removeAt(loop);
            notFound = false;
        }
        loop++;
    }
}

void City::changeFoodCost(QString food, double price)
{
    int index = 0;
    bool notFound = true;
    while (index < foodInfo.size() && notFound){
        if(foodInfo[index].first == food){
            foodInfo[index].second = price;
            notFound = false;
        }
        ++index;
    }
}

QString City::getCityName()
{
    return cityName;
}

// retrieves distance from "this" City object to "city"
double City::getDistance(QString city)
{
    if(city == "Amsterdam")
        return allDistances[0];
    if(city == "Berlin")
        return allDistances[1];
    if(city == "Brussels")
        return allDistances[2];
    if(city == "Budapest")
        return allDistances[3];
    if(city == "Hamburg")
        return allDistances[4];
    if(city == "Lisbon")
        return allDistances[5];
    if(city == "London")
        return allDistances[6];
    if(city == "Madrid")
        return allDistances[7];
    if(city == "Paris")
        return allDistances[8];
    if(city == "Prague")
        return allDistances[9];
    if(city == "Rome")
        return allDistances[10];
    if(city == "Stockholm")
        return allDistances[11];
    if(city == "Vienna")
        return allDistances[12];
}

