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
    ui->tableWidgetCart->setColumnCount(2);

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
    //foodList[selectedIndex].second = quantityBought;

    //ui->tableWidgetCart->insertRow(cartCount);
    ui->tableWidgetCart->insertRow(ui->tableWidgetCart->rowCount());

    //ui->tableWidgetCart->setItem(cartCount, 0, new QTableWidgetItem(foodList[selectedIndex].first));
    ui->tableWidgetCart->setItem((ui->tableWidgetCart->rowCount() - 1), 0, new QTableWidgetItem(foodList[selectedIndex].first));

    //ui->tableWidgetCart->setItem(cartCount, 1, new QTableWidgetItem("$" + QString::number(foodList[selectedIndex].second)));
    //ui->tableWidgetCart->setItem(cartCount, 1, new QTableWidgetItem("Quantitiy: " + qBString + "$" + priceStr));
    ui->tableWidgetCart->setItem((ui->tableWidgetCart->rowCount() - 1), 1, new QTableWidgetItem("Quantitiy: " + qBString + "    $" + priceStr));

    ui->comboBoxRemove->addItem(selectedFood);


    //purchasedFood[currentCity].addNewFoodItem(foodList[selectedIndex].first, foodList[selectedIndex].second ); // NEW STUFF
    purchasedFood[currentCity].first.addNewFoodItem(foodList[selectedIndex].first, foodList[selectedIndex].second);
    purchasedFood[currentCity].second.push_back(quantityBought);
    //cartCount++;
    cartCount += quantityBought;

    //cartList.append(foodList[selectedIndex]);
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
//        for(int i = 0; i < ui->tableWidgetCart->rowCount(); i++)
//        {
//            purchasedFood[i].addNewFoodItem(cartList[i].first, cartList[i].second);

//        }
        Receipt invoice;

       invoice.addData(purchasedFood);
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
