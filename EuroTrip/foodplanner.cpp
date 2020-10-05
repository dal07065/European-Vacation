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
    tableCount = 0;
}
void foodPlanner::addCity(City data)
{
    travelPlan.append(data);
}
void foodPlanner::addTravelPlanData(QVector<City> data)
{
    for(int loop = 0; loop < data.size(); loop++)
    {
        travelPlan.append(data[loop]);
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

    ui->tableWidget->setRowCount(foodList.size());
    ui->tableWidget->setColumnCount(2);

    ui->tableWidgetCart->setRowCount(foodList.size());
    ui->tableWidgetCart->setColumnCount(2);

    for(int i = 0; i < foodList.size(); i++)
    {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(foodList[i].first));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem("$" + QString::number(foodList[i].second)));
        ui->comboBoxAdd->addItem(foodList[i].first);
        tableCount++;
    }

}

void foodPlanner::on_addItem_clicked()
{
    QString selectedFood = ui->comboBoxAdd->currentText();
    int selectedIndex = ui->comboBoxAdd->currentIndex();

    for(int i = 0; i < foodList.size(); i++)
    {
        if(selectedFood == foodList[i].first)
        {
            cartList.append(foodList[i]);
            ui->tableWidgetCart->setItem(cartCount, 0, new QTableWidgetItem(foodList[i].first));
            ui->tableWidgetCart->setItem(cartCount, 1, new QTableWidgetItem("$" + QString::number(foodList[i].second)));
            cartCount++;
            tableCount--;
            ui->comboBoxAdd->removeItem(selectedIndex);
            ui->comboBoxRemove->addItem(selectedFood);
            ui->tableWidget->removeRow(selectedIndex);
            ui->tableWidget->insertRow(tableCount);
            foodList.remove(i);

            break;
        }
    }
}
bool foodPlanner::correctFood(QString foodName)
{
    QVector<QPair<QString, double>> foodListOriginal = travelPlan[currentCity].getAllFood();
    for(int i= 0; i < foodListOriginal.size(); i++)
    {
        if(foodName == foodListOriginal[i].first)
            return true;
    }
    return false;
}
void foodPlanner::on_removeItem_clicked()
{
    QString selectedFood = ui->comboBoxRemove->currentText();
    int selectedIndex = ui->comboBoxRemove->currentIndex();

    for(int i = 0; i < cartList.size(); i++)
    {
        if(selectedFood == cartList[i].first)
        {
            if(correctFood(selectedFood))
            {
                foodList.append(cartList[i]);
                ui->tableWidget->setItem(tableCount, 0, new QTableWidgetItem(cartList[i].first));
                ui->tableWidget->setItem(tableCount, 1, new QTableWidgetItem("$" + QString::number(cartList[i].second)));
                ui->comboBoxAdd->addItem(selectedFood);
                tableCount++;
            }
            cartCount--;
            ui->comboBoxRemove->removeItem(selectedIndex);
            ui->tableWidgetCart->removeRow(selectedIndex);
            ui->tableWidgetCart->insertRow(cartCount);
            cartList.remove(i);

            break;
        }
    }
}

void foodPlanner::on_nextButton_clicked()
{
    if(currentCity + 1 == travelPlan.size())
    {

    }
    else
    {
        ui->comboBoxAdd->clear();
        currentCity++;
        tableCount = 0;
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
        ui->comboBoxAdd->clear();
        currentCity--;
        tableCount = 0;
        setupUi();
    }
}

void foodPlanner::on_exitButton_clicked()
{
    close();
}
