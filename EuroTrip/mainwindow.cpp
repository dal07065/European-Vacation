#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "city.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <iomanip>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFile file("C:\\Users\\natra\\Desktop\\European Distances and Foods.txt");
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0, "info", file.errorString());
    }
    QTextStream in(&file);



    QVector<City> cityListData; // vector to hold city information
    City cityInfo;              // city variable used to input cities into the city vector
    bool moreCities= true;
    bool moreFood = true;
    QString cityName;
    QString foodName;
    QString price;
    double  foodPrice;

    //reads in the input from the file
    while(moreCities)
    {
        //if the line read is NOT a new line character, cityname equals the readline(which is city name) and moves on to the next loop
        //if the line read IS A new line character, the loop exits.
        if((cityName = in.readLine()) != '\n')
        {
            cityInfo.setCityName(cityName);

            //reads in input for the food name and price
            while(moreFood)
            {
                //if the line read is NOT a new line character, foodname equals the readline(which is the food name) and moves on to read in the price.
                //if the line read IS A new line character, the loop exits to read in the next city.
                if((foodName = in.readLine()) != '\n')
                {
                    foodPrice = in.readLine().toDouble();        //Converts the read in string into a double value
                    cityInfo.addNewFoodItem(foodName, foodPrice);//adds the food name and price into the vector array inside the city's vector array for food and price lol.
                }
                else
                {
                    moreFood = false;
                }
            }
        }
        else
        {
            moreCities = false;
        }
        cityListData.push_back(cityInfo); //this adds the city object into the vector array
    }

    for(int loop= 0; loop < cityListData.size(); loop++)//this loops through the main city vecotr to print the info on each city.
    {
        ui->cityList->append(cityInfo.getCityName()); //this is supposed to display the city name onto the cityList text box on the gui.
        for(int loop = 0;loop < cityInfo.getAllFood().size(); loop++) //this loops through out the food vector array in each city object to print the food and price.
        {
            ui->cityList->append(cityInfo.getAllFood().at(loop).first);//append is supposed to allow you to print multiple lines of text on the gui without it refreshing. first is food name
            price = QString::number(cityInfo.getAllFood().at(loop).second);//second is food price.
            ui->cityList->append(price);
        }
    }
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
    QFile file("E:\\gitRepositories\\CS1D-Memory-Leak-European-Vacation\\EuroTrip\\European Distances and Foods.txt");
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0, "info", file.errorString());
    }
    QTextStream in(&file);

    ui->cityList->setText(in.readAll());
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

}
*/
