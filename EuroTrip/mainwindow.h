#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "login.h"
#include "city.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <iomanip>
#include <QDebug>
#include <QMainWindow>
#include <QGeoCoordinate>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
/*!
 * \brief The MainWindow class is the main ui for the application which appears when the project is ran
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /*!
     * \brief MainWindow is a constructor with a parameter
     * \param parent is a pointer of QWidget that generates a mainwindow
     */
    MainWindow(QWidget *parent = nullptr);

    /*!
     * \brief userIsAdmin is a member function
     *
     * this function will make all the admin functions visible to the user
     */
    void userIsAdmin();
    // This function will change all of the adminFuncs features visiblility
    // to true.

    /*!
     * \brief alreadyExistingCity is a member function with a parameter
     * \param str is a QString
     * \return is a boolean variable
     *
     * this function check to see if the data being read is already stored in the data and returns true or false
     */
    bool alreadyExistingCity(QString str);
    // This function checks to see if the data being read in by the
    // the function "readData" is already in the data member cityListData'
    // returns true if City object is already in QVector cityListData

    /*!
     * \brief readData is a member function with a parameter
     * \param is a QString
     *
     * this function reads the city data from a txt file and stores them in a QVector
     */
    void readData(QString);
    // This functions reads the Citys data in from a txt file for all of the
    // and stores them into a QVector of City objects called cityListData

    /*!
     * \brief readDistances is a member function with a parameter
     * \param cityList is a QVector of City objects
     *
     * this function reads in all the distance data from the distance.txt file and stores it in each city objects
     */
    void readDistances(QVector<City> &cityList);
    // This function reads in all the distance data from the distance.txt file
    // and  updates the distance array in each of the city objects
    ~MainWindow();

private slots:
    /*!
     * \brief on_actionExit_triggered is a member function
     *
     * when exit is triggered it closes the application
     */
    void on_actionExit_triggered();

    /*!
     * \brief on_actionAdmin_triggered is a member function
     *
     *when admin is triggered it opens up the login ui
     */
    void on_actionAdmin_triggered();

    /*!
     * \brief on_actionLoad_triggered is a member function
     *
     * when load is triggered the text files holding the city info are read in and stored
     */
    void on_actionLoad_triggered();

    /*!
     * \brief on_actionLoad_Extended_triggered is a member function
     *
     * when load extended is triggered the text files holding the extra city info are read in and stored
     */
    void on_actionLoad_Extended_triggered();

//    void on_pushButton_clicked();

    /*!
     * \brief on_buttonGenerate_clicked is a member function
     *
     * when generate is clicked the information pertaining to the selected city is displayed on the ui
     */
    void on_buttonGenerate_clicked();

//    void on_pushButton_AddCity_clicked();

    /*!
     * \brief on_pushButton_clicked is a member function
     *
     * this function adds a food to the menu based off information given in the ui
     */
    void on_pushButton_clicked();

    /*!
     * \brief on_actionLog_Out_triggered is a member function
     *
     * this function logs out the user who is currently logged in when the button is triggered
     */
    void on_actionLog_Out_triggered();

    /*!
     * \brief on_OptimalTravel_clicked is a member function
     *
     * when this button is clicked a travel plan will be created visiting all european cities beginning at Berlin
     */
    void on_OptimalTravel_clicked();//Starting at Berlin

    /*!
     * \brief recursivePathing is a member function with 3 parameters
     * \param start is a City object
     * \param cities is a QVector of City objects
     * \param sorted is a QVector of City object
     * \return a QVector of city objects that is sorted
     *
     * this function recursively finds the most optimal travel plan based off distances and returns the sorted QVector
     */
    QVector<City> recursivePathing(City start,QVector<City> &cities,QVector<City> &sorted);
    void on_customPlan_clicked();

    /*!
     * \brief on_OptimalTravel_2_clicked is a member function
     *
     * when this button is clicked a travel plan will be created visiting all european cities beginning at Paris
     */
    void on_OptimalTravel_2_clicked();//Starting at Paris

    /*!
     * \brief on_pushButton_loadFoods_clicked is a member function
     *
     * when load Foods is clicked all the food pertaining to the selected City object will appear on the ui
     */
    void on_pushButton_loadFoods_clicked();

    /*!
     * \brief on_pushButton_deleteFood_clicked is a member function
     *
     * when delete food is clicked it will delete the food that was selected from the data
     */
    void on_pushButton_deleteFood_clicked();

    /*!
     * \brief on_pushButton_changePrice_clicked is a member function
     *
     * when change price is clicked it will change the price of the selected food with the price that was inputted
     */
    void on_pushButton_changePrice_clicked();

private:
    Ui::MainWindow *ui; /*!< a pointer of object MainWindow*/
    QVector<City> cityListData;/*!< a QVector of City objects that stores all of the current City objects*/
    // This data memeber of QVectors stores all of the current City objects
    QString currentDataFilePath;/*!< a QString that stores the extension for the file that stores the City data */
    // This data memeber is a QString that stores the extention for the file
    // that stores the city data


    /*!
     * \mainpage Author's: Michael Duenas, Nathan Kim, Nathan Tran, Lina Kang, Jeff Purdy
     *
     * 10/19/2020
     */
};
#endif // MAINWINDOW_H
