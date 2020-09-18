#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Euro Trip");
    // Please use this to change the file path according to your computers
    currentDataFilePath = ":/Files/EuropeanDistancesandFoods.txt";

    ui->cityList->append("Click \"File\" and \"Load\" to start...");
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionAdmin_triggered()
{
    login logWindow;
    connect(&logWindow, &login::userIsAdmin, this, &MainWindow::userIsAdmin);
    logWindow.setModal(true);
    logWindow.exec();
}

void MainWindow::userIsAdmin()
{

    QMessageBox::information(this, "Login", "Username and Password is Correct");
   // ui->adminFuncs->setVisible(true);

}

void MainWindow::on_actionLoad_triggered()
{
    ui->cityList->clear();
    readData();
    //ui->cityList->setText(in.readAll());
}

/*
void MainWindow::on_pushButton_clicked()
{
    QFile file("E:\\gitRepositories\\CS1D-Memory-Leak-European-Vacation\\EuroTrip\\European Distances and Foods");
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0, "info", file.errorString());
    }
    QTextStream in(&file);

}*/

// Read Data In and Display on UI
void MainWindow::readData()
{
    QFile file(currentDataFilePath);

    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0, "info", file.errorString());
    }
    QTextStream in(&file);

    City *cityInfo;             // city variable used to input cities into the city vector
    bool moreCities= true;
    bool moreFood = true;
    QString cityName;
    QString foodName;
    QString price;
    double  foodPrice;

    //reads in the input from the file
    while(moreCities)
    {
        cityInfo = new City;
        //if the line read is NOT a new line character, cityname equals the readline(which is city name) and moves on to the next loop
        //if the line read IS A new line character, the loop exits.
        cityName = in.readLine();
        if((!cityName.isEmpty()))
        {
            cityInfo->setCityName(cityName);

            //reads in input for the food name and price
            while(moreFood)
            {
                //if the line read is NOT a new line character, foodname equals the readline(which is the food name) and moves on to read in the price.
                //if the line read IS A new line character, the loop exits to read in the next city.
                foodName = in.readLine();
                if(!foodName.isEmpty())
                {
                    foodPrice = in.readLine().toDouble();        //Converts the read in string into a double value
                    cityInfo->addNewFoodItem(foodName, foodPrice);//adds the food name and price into the vector array inside the city's vector array for food and price lol.
                }
                else
                {
                    moreFood = false;
                }
            }
            cityListData.push_back(*cityInfo); //this adds the city object into the vector array
            ui->comboBoxCities->addItem(cityName);
            moreFood = true;
        }
        else
        {
            moreCities = false;
        }
    }

    // Print data on UI
    for(int loop= 0; loop < cityListData.size(); loop++)//this loops through the main city vecotr to print the info on each city.
    {

        *cityInfo = cityListData.value(loop);
        ui->cityList->append(cityInfo->getCityName()); //this is supposed to display the city name onto the cityList text box on the gui.
        for(int j = 0;j < cityInfo->getAllFood().size(); j++) //this loops through out the food vector array in each city object to print the food and price.
        {
            price = QString::number(cityInfo->getAllFood().value(j).second);//second is food price.
            ui->cityList->append(cityInfo->getAllFood().value(j).first + ": $" + price);//append is supposed to allow you to print multiple lines of text on the gui without it refreshing. first is food name
        }
        ui->cityList->append("");
    }
    ui->comboBoxCities->addItem("Select...");
}

void MainWindow::on_buttonGenerate_clicked()
{
    // This will create a new window with all the possible travel plans
}
