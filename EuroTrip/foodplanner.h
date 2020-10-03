#ifndef FOODPLANNER_H
#define FOODPLANNER_H

#include <QDialog>
#include "city.h"

namespace Ui {
class foodPlanner;
}

class foodPlanner : public QDialog
{
    Q_OBJECT

public:
    explicit foodPlanner(QWidget *parent = nullptr);
    void addCity(City data);
    void addTravelPlanData(QVector<City> data);
    //This will add the travel plan created by the custom plan ui to the
    //food planner ui vector named travelPlan - Nathan Tran

    //The ui is supposed to flip through the cities one by one. The user
    //selects the food they want to purchase from a city and they can click
    //"next" to go to the next city. honestly the back button is probably not
    //needed and will probably be a huge pain to program cuz thatll mean the
    //user will be able to change their selection so probably scratch that idea.
    //We'll also have to think about what happens when the user gets to the last city
    //and then they click next but thats a problem for another day since Im tired now
    //lol - Nathan Tran @ 2:31 AM

    ~foodPlanner();

private:
    Ui::foodPlanner *ui;
    QVector<City> travelPlan;
};

#endif // FOODPLANNER_H
