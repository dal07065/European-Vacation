#include "foodplanner.h"
#include "ui_foodplanner.h"
#include <QtDebug>

foodPlanner::foodPlanner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::foodPlanner)
{
    ui->setupUi(this);
    currentCity = 0;
    cartCount = 0;
    totalDistance = 0;

}
void foodPlanner::addCity(City data)
{
    travelPlan.append(data);
}
void foodPlanner::addTravelPlanData(QVector<City> data)
{
    QVector<int> temp;

    purchasedFood.resize(data.size());
    for(int loop = 0; loop < data.size(); loop++)
    {
        travelPlan.append(data[loop]);
        purchasedFood[loop].first.setCityName(data[loop].getCityName());
    }

    City start = data[0]; //start city
    QVector<City> sorted; //empty vector
    sorted.push_back(start);
    QVector<City> cities = data;
    sorted = recursivePathing(start,cities,sorted);

    for(int i = 0; i < sorted.size(); i++)
    {
        if(i+1 < sorted.size())
        {
            totalDistance += (sorted[i].getDistance(sorted[i+1].getCityName()));

        }
    }
}
foodPlanner::~foodPlanner()
{
    delete ui;
}

// ui can only be setup AFTER addTravelPlanData() has been called
// thats why this separate function called setupUi has been made
// *similar to setupMenu() in customplan.cpp*
void foodPlanner::setupUi()
{
    ui->cityName->setText(travelPlan[currentCity].getCityName());

    foodList = travelPlan[currentCity].getAllFood();

    ui->tableWidget->clearContents();
    ui->comboBoxAdd->clear();

    ui->tableWidget->setRowCount(foodList.size());
    ui->tableWidget->setColumnCount(2);
    ui->tableWidgetCart->setColumnCount(3);

    for(int i = 0; i < foodList.size(); i++)
    {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(foodList[i].first));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem("$" + QString::number(foodList[i].second)));
        ui->comboBoxAdd->addItem(foodList[i].first);
    }

}

void foodPlanner::on_addItem_clicked()
{
    //int numRows = ui->tableWidgetCart->rowCount();
    ui->quantityLineEdit->setValidator( new QIntValidator(0, 2000, this) );

    int quantityBought = ui->quantityLineEdit->text().toInt();
    QString qBString = ui->quantityLineEdit->text();


    QString selectedFood = ui->comboBoxAdd->currentText();
    int selectedIndex = ui->comboBoxAdd->currentIndex();



    double price = (foodList[selectedIndex].second) * quantityBought;
    QString priceStr = QString::number(price);

    ui->tableWidgetCart->insertRow(ui->tableWidgetCart->rowCount());

    ui->tableWidgetCart->setItem((ui->tableWidgetCart->rowCount() - 1), 0, new QTableWidgetItem(foodList[selectedIndex].first));

    ui->tableWidgetCart->setItem((ui->tableWidgetCart->rowCount() - 1), 1, new QTableWidgetItem(qBString));
    ui->tableWidgetCart->setItem((ui->tableWidgetCart->rowCount() - 1), 2, new QTableWidgetItem("$" + priceStr));

    ui->comboBoxRemove->addItem(selectedFood);

    purchasedFood[currentCity].first.addNewFoodItem(foodList[selectedIndex].first, foodList[selectedIndex].second);
    purchasedFood[currentCity].second.push_back(quantityBought);

    cartCount += quantityBought;

    QPair<QString, double> temp;
    temp.first = foodList[selectedIndex].first;
    temp.second = quantityBought;
    cartList.push_back(temp);
}

void foodPlanner::on_removeItem_clicked()
{
    QString selectedFood = ui->comboBoxRemove->currentText();
    int selectedIndex = ui->comboBoxRemove->currentIndex();

    ui->comboBoxRemove->removeItem(selectedIndex);
    ui->tableWidgetCart->removeRow(selectedIndex);

    cartCount--;

    if(selectedIndex >= 0)
    {
        cartList.remove(selectedIndex);
    }
}

void foodPlanner::on_nextButton_clicked()
{
    if(currentCity + 1 == travelPlan.size())
    {
        Receipt invoice;

       invoice.addData(purchasedFood);
       invoice.setTotalDist(totalDistance);
       invoice.printReceipt();

        invoice.exec();
        close();
    }
    else
    {
        currentCity++;
        setupUi();
    }
}

void foodPlanner::on_backButton_clicked()
{
    if(currentCity - 1 < 0)
    {

    }
    else
    {
        currentCity--;
        setupUi();
    }
}

void foodPlanner::on_exitButton_clicked()
{
    close();
}

QVector<City> foodPlanner::recursivePathing(City start,QVector<City> &cities,QVector<City> &sorted ){
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

        if(cities[i].getDistance(start.getCityName()) < closest->getDistance(start.getCityName()))
        {
            closest = &cities[i];
        }
    }
    //add to sorted
    sorted.push_back(*closest);

    //if more than 1 city remains then recurse
    if(cities.size() > 1){
      recursivePathing(*closest,cities,sorted);
    }
    return sorted;
}
