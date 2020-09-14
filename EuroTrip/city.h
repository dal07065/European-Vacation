#ifndef CITY_H
#define CITY_H

#include <QString>
#include <QVector>
#include <QPair>

class City
{
public:
    City();
    City(QString name, QString foodName, double foodCost);
    void setCityName(QString newName);
    void addNewFoodItem(QString foodName, double foodCost);
    QVector<QPair<QString, double>> getAllFood();
    QString getCityName();

private:
    QString cityName;
    QVector<QPair<QString, double>> foodInfo;
};

#endif // CITY_H

