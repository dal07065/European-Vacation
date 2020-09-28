#include "customplan.h"
#include "ui_customplan.h"
#include <QDebug>

customPlan::customPlan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customPlan)
{
    ui->setupUi(this);
}

void customPlan::addCity(City data)
{
    customCityData.push_back(data);
}

void customPlan::addCustomCityData(QVector<City> data)
{
    for(int loop = 0; loop < data.size(); loop++)
    {
        customCityData.push_back(data[loop]);
    }

}

void customPlan::setupMenu()
{
    ui->startingCity->append(customCityData[0].getCityName());

    for(int loop = 1; loop < customCityData.size(); loop++)
    {
        ui->listWidget->addItem(customCityData[loop].getCityName());
    }
}

customPlan::~customPlan()
{
    delete ui;
}

void customPlan::on_generate_clicked()
{

}
