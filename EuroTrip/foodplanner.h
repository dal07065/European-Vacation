#ifndef FOODPLANNER_H
#define FOODPLANNER_H

#include <QDialog>
#include "city.h"
#include "receipt.h"

namespace Ui {
class foodPlanner;
}

/*!
 * \brief The foodPlanner class help maintain and display information about the food purchases as we travel from city to city
 */
class foodPlanner : public QDialog
{
    Q_OBJECT

public:
    /*!
     * \brief foodPlanner is a constructor with a parameter
     * \param parent is a pointer of type QWidget
     *
     * this constructor generates a new QWidget for food purchasing purposes
     */
    explicit foodPlanner(QWidget *parent = nullptr);
    /*!
     * \brief addCity is a member function with a parameters
     * \param data if of object type City
     *
     * this function adds the starting city data into the travelplan QVector data member
     */
    void addCity(City data);
    //This function is used to add city data into the travelplan class data member
    //for foodplanner. data contains city data from customplan
    //This is mainly used for adding the starting city to the travel plan vector.

    /*!
     * \brief addTravelPlanData is a member function with a parameter
     * \param data if a QVector of City objects
     *
     * this function adds the remainder of the cities into the travelplan QVector data member
     */
    void addTravelPlanData(QVector<City> data);
    //This adds the rest of the travel plan data from customplan to the travelplan data mamber
    // The arguement data is the generated travel plan info from custom plan.

    /*!
     * \brief setupUi is a member function
     *
     * used to set up the foodplanner ui
     */
    void setupUi();
    //This is just used to set up the foodplanner ui

    /*!
     * \brief correctFood is a member function
     * \return a boolean variable
     *
     * used to determine if the food name is what we want it to be
     */
    bool correctFood(QString);
    //I dont know if this is even used in the program tbh

    /*!
     * \brief findCurrentCity is a member function with a parameter
     * \param foodName is a QString
     * \return an integer variable that is the index of the city we searched for
     *
     * searches and returns the index of the city we are looking for
     */
    int findCurrentCity(QString foodName);
    //I dont think this is even used either lmao

    //Note: this recursive pathing function is a copy of the one in mainwindow.cpp. This copy is needed so that the totalDistance
    //      of the trip can be calculated and then sent to the recipt
    /*!
     * \brief recursivePathing is a member function with 3 parameters
     * \param start is a City object
     * \param cities is a QVector of City object
     * \param sorted is a QVector of City objects
     * \return a QVector of sorted City objects
     *
     * this function recursively finds the most optimal pathing between cities and stores them into a QVector which is returned
     */
    QVector<City> recursivePathing(City start,QVector<City> &cities,QVector<City> &sorted);

    ~foodPlanner();

private slots:
    /*!
     * \brief on_addItem_clicked is a member function
     *
     *stores the selected food and its quantity purchased for the city that it was purchased at
     */
    void on_addItem_clicked();

    /*!
     * \brief on_removeItem_clicked is a member function
     *
     * removes a food item and its quantity from the city that it was purchased in
     */
    void on_removeItem_clicked();

    /*!
     * \brief on_nextButton_clicked is a member function
     *
     * once next is clicked the next city in the travel plan will appear and food belonging to that city can be purchased
     */
    void on_nextButton_clicked();

    /*!
     * \brief on_backButton_clicked is a member function
     *
     * when back is clicked the previous city in the travel plan will appear and the food belonging to that city can be purchased once again
     */
    void on_backButton_clicked();

    /*!
     * \brief on_exitButton_clicked is a member function
     *
     * when exit it clicked the foodplanner ui that enables food purchases will close
     */
    void on_exitButton_clicked();

private:
    Ui::foodPlanner *ui;/*!< a pointer of object foodPlanner*/
    QVector<City> travelPlan; /*!< a QVector of city objects made from custom planner*/
    QVector<QPair<City, QVector<int>>> purchasedFood;/*!< a QVector pair of city objects and QVector of ints which hold the city food and their quantities*/

    QVector<QPair<QString, double>> foodList;/*!< a QVector pair of QString and double which holds the food menu at each city*/
    QVector<QPair<QString, double>> cartList;/*!< a QVector pair of QString and double which holds the food the user has selected to purchase*/

    int currentCity; /*!< an int which indicates the current city being viewed*/
    int cartCount;/*!< an int which shows how many items have been purchased*/
    //int tableCount;
    double totalDistance;/*!< a double which shows the total distance traveled on the trip*/
};

#endif // FOODPLANNER_H
