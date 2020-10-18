#ifndef RECEIPT_H
#define RECEIPT_H

#include <QDialog>
#include "city.h"

namespace Ui {
class Receipt;
}

class Receipt : public QDialog
{
    Q_OBJECT

public:
    explicit Receipt(QWidget *parent = nullptr);
    void setTotalDist(double temp)
    {
        totalDistance = temp;
    }
    //Function that sets the total distance of the trip
    //temp is the total distance from foodplanner

    double getTotalDist()
    {
        return totalDistance;
    }
    //Function that gets the total tdistance of the trip

    void addData(QVector<QPair<City, QVector<int>>> data);
    //void addData(QVector<QVector<QPair<QString, double>>>);
    //Function to add data from foodplanner to purchasedFood vector
    // The argument data is a vector that contains a QPair of city and int vector.
    // The city vector contains a city which will hold the name and has a internal
    // vector for purchased food, the int QVector contains the data that is in parralel
    // with the internal food vector that keeps track of the quantity.

    void printReceipt();
    //Function to print reciept.

    ~Receipt();

private:
    Ui::Receipt *ui;
    QVector<QPair<City, QVector<int>>> purchasedFood;
    //This is the datamember that contains the purchased food in each city.
    //for every city object, there is a int vector that acts as a parrallel
    //array in order to keep track of the qty purchased for each food.

    double totalDistance; //Total Distance of the trip
};

#endif // RECEIPT_H
