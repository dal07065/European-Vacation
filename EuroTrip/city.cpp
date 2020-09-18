#include "city.h"

City::City()
{
    cityName = "Berlin";
    QPair<QString, double> input;
}

City::City(QString name, QString foodName, double foodCost)
{
    cityName = name;
    QPair<QString, double> input(foodName, foodCost);

    foodInfo.push_front(input);
}

void City::setCityName(QString newName)
{
    cityName = newName;
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


