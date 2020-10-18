#ifndef CUSTOMPLAN_H
#define CUSTOMPLAN_H

#include <QDialog>
#include "city.h"
#include "foodplanner.h"
#include "mainwindow.h"

namespace Ui {
class customPlan;
}

/*!
 * \brief The customPlan class is a subclass of QDialog used to generate a custom travel plan
 */
class customPlan : public QDialog
{
    Q_OBJECT

public:
    /*!
     * \brief customPlan is a constructor with a parameter
     * \param parent is of type QWidget
     *
     * the function generates a new ui for custom plan
     */
    explicit customPlan(QWidget *parent = nullptr);
    /*!
     * \brief addCity is member function which takes in one parameter
     * \param data is of object type City
     *
     * this function adds a city to the vector customCityData
     */
    void addCity(City data);
    /*!
     * \brief addCustomCityData is a member function that takes in a parameter
     * \param data is a Qvector of City
     *
     * the function adds the contents of the vector into customCityData
     */
    void addCustomCityData(QVector<City> data);
    /*!
     * \brief setupMenu is a member function
     *
     * this functions outputs the name of all the cities in customCityData to the ui
     */
    void setupMenu();
    /*!
     * \brief getSelectedCities is a member function
     *
     * this functions obtains the selected cities and stores them in class member function selectedCities
     */
    void getSelectedCities();
    //This function is used to get the selected cities and put in the class data member selectedCities
    //include the starting city at the start of the list or vector. Just a warning this is kinda cancer
    // - Nathan Tran

    /*!
     * \brief findMostEfficientPath is a member function
     *
     * this function will find the most efficient path from the starting city to the selected cities
     */
    void findMostEfficientPath();
    //This function is used to get the most efficient path from the starting city to the selected cities.
    //this will input that plan into the cityPlan class data member which will serve as the created main custom plan
    //and will be passed into the foodplanner ui. - Nathan Tran

    /*!
     * \brief recursivePathingCustomPlan is a member function
     * \param start is of type City
     * \param cities is a Qvector of City objects
     * \param sorted is a Qvector of City object
     * \return a Qvector of City objects that are sorted bsaed off of optimal traveling distance
     *
     * this function recursively finds the most efficient trip based off distances from one city to the next
     */
    QVector<City> recursivePathingCustomPlan(City start,QVector<City> &cities,QVector<City> &sorted);

    ~customPlan();

private slots:
    /*!
     * \brief on_generate_clicked is a member function
     *
     * it outputs the list of cities to be traveled to in order of distance optimization to the ui
     */
    void on_generate_clicked();

    /*!
     * \brief on_startTrip_clicked is a member function
     *
     * Generates the foodplanner ui to allow the purchasing of food at each city
     */
    void on_startTrip_clicked();

private:
    Ui::customPlan *ui;/*!< a pointer of customPlan object */
    QVector<City> customCityData;/*!< a QVector of object City which hold all the cities that can be possibly traveled to*/
    QVector<City> selectedCities;/*!< a QVector of object City which stores cities chosen from the user*/
    QVector<City> cityPlan;      /*!< a QVector of object City*/
};

#endif // CUSTOMPLAN_H
