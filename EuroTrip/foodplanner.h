#ifndef FOODPLANNER_H
#define FOODPLANNER_H

#include <QDialog>
#include "city.h"
#include "receipt.h"

namespace Ui {
class foodPlanner;
}

class foodPlanner : public QDialog
{
    Q_OBJECT

public:
    explicit foodPlanner(QWidget *parent = nullptr);
    void addCity(City data);
    //This function is used to add city data into the travelplan class data member
    //for foodplanner. data contains city data from customplan
    //This is mainly used for adding the starting city to the travel plan vector.

    void addTravelPlanData(QVector<City> data);
    //This adds the rest of the travel plan data from customplan to the travelplan data mamber
    // The arguement data is the generated travel plan info from custom plan.

    void setupUi();
    //This is just used to set up the foodplanner ui

    bool correctFood(QString);
    //I dont know if this is even used in the program tbh

    int findCurrentCity(QString foodName);
    //I dont think this is even used either lmao

    //Note: this recursive pathing function is a copy of the one in mainwindow.cpp. This copy is needed so that the totalDistance
    //      of the trip can be calculated and then sent to the recipt
    QVector<City> recursivePathing(City start,QVector<City> &cities,QVector<City> &sorted);

    ~foodPlanner();

private slots:
    void on_addItem_clicked();

    void on_removeItem_clicked();

    void on_nextButton_clicked();

    void on_backButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::foodPlanner *ui;
    QVector<City> travelPlan; //This is the generated travel plan from customm planner
    QVector<QPair<City, QVector<int>>> purchasedFood;// This keeps track of the purchased food in each city as well as their quantities.

    QVector<QPair<QString, double>> foodList;//This is the current food in the menu to purchase from each city
    QVector<QPair<QString, double>> cartList;//This is the current food added to the cart

    int currentCity; //This indicates the current city on the page
    int cartCount;//This indicates how much fod is in the cart.
    int tableCount;
    double totalDistance;//This keeps track fo the total distance in the trip
};

#endif // FOODPLANNER_H
