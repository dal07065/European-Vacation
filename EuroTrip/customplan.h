#ifndef CUSTOMPLAN_H
#define CUSTOMPLAN_H

#include <QDialog>
#include "city.h"

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
    ~customPlan();

private slots:
    void on_generate_clicked();

private:
    Ui::customPlan *ui;
    QVector<City> customCityData;
};

#endif // CUSTOMPLAN_H
