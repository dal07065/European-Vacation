#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Euro Trip");
    ui->adminFuncs->setVisible(false);
    ui->actionLog_Out->setVisible(false);
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

void MainWindow::on_actionLog_Out_triggered()
{
    ui->adminFuncs->setVisible(false);
    ui->actionLog_Out->setVisible(false);
}

void MainWindow::userIsAdmin()
{
    QMessageBox::information(this, "Login", "Username and Password is Correct");
    ui->adminFuncs->setVisible(true);
    ui->actionLog_Out->setVisible(true);
}

void MainWindow::on_actionLoad_triggered()
{
    ui->cityList->clear();
    readData();
    //ui->cityList->setText(in.readAll());

    // Loads all of current QVector cityListData into Admin

    for(int i = 0; i < cityListData.size(); ++i){
        ui->comboBox_SelectCityAddFood->addItem(cityListData[i].getCityName());
    }
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

    double longitude;
    double latitude;

    QString tempLong;
    QString tempLat;

    QString tempLongDir;
    QString tempLatDir;

    QGeoCoordinate berlin;
    berlin.setLatitude(52.5200);
    berlin.setLongitude(13.4050);

    QString berlinDist;


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

            latitude = in.readLine().toDouble();
            longitude = in.readLine().toDouble();
            /////EDIT////////////////////////////
            cityInfo->setLatitude(latitude);
            cityInfo->setLongitude(longitude);

            tempLatDir = in.readLine();
            tempLongDir = in.readLine();

            cityInfo->setLatDir(tempLatDir);
            cityInfo->setLongDir(tempLongDir);

            //////END EDIT///////////////////////////

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

        /////EDIT////////////////////////////////////////////
        tempLat = QString::number(cityInfo->getLatitude());
        tempLong = QString::number(cityInfo->getLongitude());

        ui->cityList->append(tempLat + cityInfo->getLatDir() + ", " + tempLong + cityInfo->getLongDir());
         ////END EDIT/////////////////////////////////////////
        berlinDist = QString::number((cityInfo->getCoordinates().distanceTo(berlin) / 1000));
       ui->cityList->append("Distance from Berlin: " + berlinDist + "km");

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

void MainWindow::on_pushButton_AddCity_clicked()
{
    QString cityName = ui->lineEdit_AddCity->text();
    if(cityName.size() > 2)
    {
        City newCity;
        newCity.setCityName(cityName);
        cityListData.push_back(newCity);
        ui->lineEdit_AddCity->clear();
    }
}

void MainWindow::on_pushButton_clicked()
{
    QString cityName = ui->comboBox_SelectCityAddFood->currentText();
    QString foodName = ui->lineEdit_FoodName->text();
    double  foodCost = ui->doubleSpinBox_FoodCost->value();

    int count = 0;
    while(count < cityListData.size() - 1 && cityListData[count].getCityName() != cityName)
    {
        count++;
    }
    cityListData[count].addNewFoodItem(foodName, foodCost);

    // TESTING STUFF
    qDebug() << "City: " << cityListData[count].getCityName();
    QVector<QPair<QString, double>> foodInfo = cityListData[count].getAllFood();
    qDebug() << "Food: ";
    for(int i = 0; i < foodInfo.size(); ++i){
        qDebug() << foodInfo[i].first << "  $" << foodInfo[i].second;
    }
    // TESTING STUFF
}


