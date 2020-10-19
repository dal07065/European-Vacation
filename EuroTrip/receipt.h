#ifndef RECEIPT_H
#define RECEIPT_H

#include <QDialog>
#include "city.h"

namespace Ui {
class Receipt;
}

/*!
 * \brief The Receipt class generates the ui for the receipt printed after the purchase of foods from each city
 */
class Receipt : public QDialog
{
    Q_OBJECT

public:
    /*!
     * \brief Receipt is a contructor with a parameter
     * \param parent is a pointer of QWidget
     *
     * this constructor generates a new receipt ui
     */
    explicit Receipt(QWidget *parent = nullptr);

    /*!
     * \brief setTotalDist is a member function with a parameter
     * \param temp is a double
     *
     * this functions sets the total distance traveled obtained from foodplanner
     */
    void setTotalDist(double temp)
    {
        totalDistance = temp;
    }
    //Function that sets the total distance of the trip
    //temp is the total distance from foodplanner

    /*!
     * \brief getTotalDist is a getter function
     * \return a double
     *
     * this functions returns the total distance
     */
    double getTotalDist()
    {
        return totalDistance;
    }
    //Function that gets the total tdistance of the trip

    /*!
     * \brief addData is a member function with a parameter
     * \param data is a QVector pair of City object and a QVector of ints
     *
     * this function adds data from foodplanner to the data member QVector pair purchasedFood
     */
    void addData(QVector<QPair<City, QVector<int>>> data);
    //void addData(QVector<QVector<QPair<QString, double>>>);
    //Function to add data from foodplanner to purchasedFood vector
    // The argument data is a vector that contains a QPair of city and int vector.
    // The city vector contains a city which will hold the name and has a internal
    // vector for purchased food, the int QVector contains the data that is in parralel
    // with the internal food vector that keeps track of the quantity.

    /*!
     * \brief printReceipt is a member function
     *
     * this function prints out the receipt for the trip
     */
    void printReceipt();
    //Function to print reciept.

    ~Receipt();

private:
    Ui::Receipt *ui;/*!< a pointer of object Receipt*/
    QVector<QPair<City, QVector<int>>> purchasedFood;/*!< a QVector pair of City object and Qvector of ints which contained all the purchased food*/
    //This is the datamember that contains the purchased food in each city.
    //for every city object, there is a int vector that acts as a parrallel
    //array in order to keep track of the qty purchased for each food.

    double totalDistance; /*!< a double which holds the total distance traveled for the trip*/
    //Total Distance of the trip
};

#endif // RECEIPT_H
