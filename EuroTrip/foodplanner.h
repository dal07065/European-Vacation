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
    void addTravelPlanData(QVector<City> data);

    void setupUi();
    bool correctFood(QString);

    int findCurrentCity(QString foodName);

    //This will add the travel plan created by the custom plan ui to the
    //food planner ui vector named travelPlan

    ~foodPlanner();

private slots:
    void on_addItem_clicked();

    void on_removeItem_clicked();

    void on_nextButton_clicked();

    void on_backButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::foodPlanner *ui;
    QVector<City> travelPlan;
    QVector<City> purchasedFood;

    QVector<QPair<QString, double>> foodList;
    QVector<QPair<QString, double>> cartList;

    int currentCity;
    int cartCount;
    int tableCount;
};

#endif // FOODPLANNER_H
