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

void customPlan::getSelectedCities()
{


}

void findMostEfficientPath()
{

}

customPlan::~customPlan()
{
    delete ui;
}

QVector<City> customPlan::recursivePathingCustomPlan(City start,QVector<City> &cities,QVector<City> &sorted )
{
    //deletes starting city from the list of cities
    QVector<City>::iterator it = cities.begin();
    for(int i = 0; i < cities.size(); i++)
    {
        if(start.getCityName() == cities[i].getCityName()){
            cities.erase(it);
        }
        it++;
    }

    //find the closest city to the start city
    City* closest = &cities[0];
    for(int i = 0; i < cities.size();i++)
    {
        qDebug() << "Comparing Distance from " << cities[i].getCityName() << " of " << cities[i].getDistance(start.getCityName()) <<
                    " to " << closest->getCityName() << " of " << closest->getDistance(start.getCityName()) << endl;
        if(cities[i].getDistance(start.getCityName()) < closest->getDistance(start.getCityName()))
        {
            closest = &cities[i];
        }
    }
    //add to sorted
    sorted.push_back(*closest);

    //if more than 1 city remains then recurse
    if(cities.size() > 1){
      recursivePathingCustomPlan(*closest,cities,sorted);
    }
    return sorted;
}

void customPlan::on_generate_clicked()
{
    // Reset the text browser display and the selected cities vector
    ui->textBrowser->clear();
    selectedCities.clear();

    // if cities have been selected
    if(ui->listWidget->selectedItems().size() > 0)
    {
        QList<QListWidgetItem *> selectedSlots = ui->listWidget->selectedItems();
        for(int i = 0; i < selectedSlots.size(); i++)
        {
            for(int j = 0; j < customCityData.size(); j++)
            {
                if(selectedSlots[i]->text() == customCityData[j].getCityName())
                {
                    selectedCities.append(customCityData[j]);
                }
            }
        }

        City start = customCityData[0]; //start = berlin
        QVector<City> sorted; //empty vector
        sorted.push_back(start);
        selectedCities = recursivePathingCustomPlan(start,selectedCities,sorted);
    }
    // if no cities have been selected
    else if(ui->listWidget->selectedItems().size() == 0)
    {
        // if a NUMBER of cities have been specified
        if(ui->spinBox->value() > 0)
        {
//            This is where you should take in ui->spinBox->value() and
//            find __5__ closest cities from Paris

//            City start = customCityData[0]; //start = berlin
//            QVector<City> sorted; //empty vector
//            sorted.push_back(start);
//            selectedCities = recursivePathingCustomPlan(start,selectedCities,sorted);
        }
        selectedCities.append(customCityData[0]);
    }

    // Print selected cities onto the text browser
    for(int i = 0; i < selectedCities.size(); i++)
    {
        QString cityAndDistance = selectedCities[i].getCityName();
        ui->textBrowser->append(cityAndDistance);
    }
}

void customPlan::on_startTrip_clicked()
{
    foodPlanner finalizedTrip;
    finalizedTrip.addTravelPlanData(selectedCities);
    finalizedTrip.setupUi();
    finalizedTrip.exec();
}
