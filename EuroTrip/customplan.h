#ifndef CUSTOMPLAN_H
#define CUSTOMPLAN_H

#include <QDialog>
#include "city.h"
#include "foodplanner.h"
#include "mainwindow.h"

namespace Ui {
class customPlan;
}

class customPlan : public QDialog
{
    Q_OBJECT

public:
    explicit customPlan(QWidget *parent = nullptr);
    void addCity(City data);
    void addCustomCityData(QVector<City> data);
    void setupMenu();
    void getSelectedCities();
    //This function is used to get the selected cities and put in the class data member selectedCities
    //include the starting city at the start of the list or vector. Just a warning this is kinda cancer
    // - Nathan Tran

    void findMostEfficientPath();
    //This function is used to get the most efficient path from the starting city to the selected cities.
    //this will input that plan into the cityPlan class data member which will serve as the created main custom plan
    //and will be passed into the foodplanner ui. - Nathan Tran
    QVector<City> recursivePathingCustomPlan(City start,QVector<City> &cities,QVector<City> &sorted);

    ~customPlan();

private slots:
    void on_generate_clicked();

    void on_startTrip_clicked();

private:
    Ui::customPlan *ui;
    QVector<City> customCityData;
    QVector<City> selectedCities;
    QVector<City> cityPlan;
};

#endif // CUSTOMPLAN_H
