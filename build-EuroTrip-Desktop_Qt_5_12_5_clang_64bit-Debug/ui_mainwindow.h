/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdmin;
    QAction *actionExit;
    QAction *actionLoad;
    QAction *actionLog_Out;
    QAction *actionLoad_Extended;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *cityList;
    QLabel *label_8;
    QComboBox *comboBoxCities;
    QPushButton *buttonGenerate;
    QPushButton *OptimalTravel;
    QPushButton *OptimalTravel_2;
    QPushButton *customPlan;
    QGroupBox *adminFuncs;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_SelectCityAddFood;
    QPushButton *pushButton_loadFoods;
    QLabel *label_5;
    QComboBox *comboBox_EditFood;
    QDoubleSpinBox *doubleSpinBox_EditFoodPrice;
    QSplitter *splitter;
    QPushButton *pushButton_changePrice;
    QPushButton *pushButton_deleteFood;
    QLabel *label_3;
    QLineEdit *lineEdit_FoodName;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_FoodCost;
    QPushButton *pushButton;
    QTextBrowser *cityListOptimalTravel;
    QLabel *label_7;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(916, 535);
        actionAdmin = new QAction(MainWindow);
        actionAdmin->setObjectName(QString::fromUtf8("actionAdmin"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionLog_Out = new QAction(MainWindow);
        actionLog_Out->setObjectName(QString::fromUtf8("actionLog_Out"));
        actionLoad_Extended = new QAction(MainWindow);
        actionLoad_Extended->setObjectName(QString::fromUtf8("actionLoad_Extended"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 301, 481));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 5, 0, 5);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        cityList = new QTextBrowser(verticalLayoutWidget);
        cityList->setObjectName(QString::fromUtf8("cityList"));

        verticalLayout->addWidget(cityList);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        comboBoxCities = new QComboBox(verticalLayoutWidget);
        comboBoxCities->setObjectName(QString::fromUtf8("comboBoxCities"));

        verticalLayout->addWidget(comboBoxCities);

        buttonGenerate = new QPushButton(verticalLayoutWidget);
        buttonGenerate->setObjectName(QString::fromUtf8("buttonGenerate"));

        verticalLayout->addWidget(buttonGenerate);

        OptimalTravel = new QPushButton(verticalLayoutWidget);
        OptimalTravel->setObjectName(QString::fromUtf8("OptimalTravel"));

        verticalLayout->addWidget(OptimalTravel);

        OptimalTravel_2 = new QPushButton(verticalLayoutWidget);
        OptimalTravel_2->setObjectName(QString::fromUtf8("OptimalTravel_2"));

        verticalLayout->addWidget(OptimalTravel_2);

        customPlan = new QPushButton(verticalLayoutWidget);
        customPlan->setObjectName(QString::fromUtf8("customPlan"));

        verticalLayout->addWidget(customPlan);

        adminFuncs = new QGroupBox(centralwidget);
        adminFuncs->setObjectName(QString::fromUtf8("adminFuncs"));
        adminFuncs->setGeometry(QRect(650, 70, 221, 371));
        verticalLayout_2 = new QVBoxLayout(adminFuncs);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(adminFuncs);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        comboBox_SelectCityAddFood = new QComboBox(adminFuncs);
        comboBox_SelectCityAddFood->setObjectName(QString::fromUtf8("comboBox_SelectCityAddFood"));

        verticalLayout_2->addWidget(comboBox_SelectCityAddFood);

        pushButton_loadFoods = new QPushButton(adminFuncs);
        pushButton_loadFoods->setObjectName(QString::fromUtf8("pushButton_loadFoods"));

        verticalLayout_2->addWidget(pushButton_loadFoods);

        label_5 = new QLabel(adminFuncs);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        comboBox_EditFood = new QComboBox(adminFuncs);
        comboBox_EditFood->setObjectName(QString::fromUtf8("comboBox_EditFood"));

        verticalLayout_2->addWidget(comboBox_EditFood);

        doubleSpinBox_EditFoodPrice = new QDoubleSpinBox(adminFuncs);
        doubleSpinBox_EditFoodPrice->setObjectName(QString::fromUtf8("doubleSpinBox_EditFoodPrice"));
        doubleSpinBox_EditFoodPrice->setSingleStep(0.250000000000000);

        verticalLayout_2->addWidget(doubleSpinBox_EditFoodPrice);

        splitter = new QSplitter(adminFuncs);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_changePrice = new QPushButton(splitter);
        pushButton_changePrice->setObjectName(QString::fromUtf8("pushButton_changePrice"));
        splitter->addWidget(pushButton_changePrice);
        pushButton_deleteFood = new QPushButton(splitter);
        pushButton_deleteFood->setObjectName(QString::fromUtf8("pushButton_deleteFood"));
        splitter->addWidget(pushButton_deleteFood);

        verticalLayout_2->addWidget(splitter);

        label_3 = new QLabel(adminFuncs);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        lineEdit_FoodName = new QLineEdit(adminFuncs);
        lineEdit_FoodName->setObjectName(QString::fromUtf8("lineEdit_FoodName"));

        verticalLayout_2->addWidget(lineEdit_FoodName);

        label_4 = new QLabel(adminFuncs);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        doubleSpinBox_FoodCost = new QDoubleSpinBox(adminFuncs);
        doubleSpinBox_FoodCost->setObjectName(QString::fromUtf8("doubleSpinBox_FoodCost"));
        doubleSpinBox_FoodCost->setSingleStep(0.250000000000000);

        verticalLayout_2->addWidget(doubleSpinBox_FoodCost);

        pushButton = new QPushButton(adminFuncs);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        cityListOptimalTravel = new QTextBrowser(centralwidget);
        cityListOptimalTravel->setObjectName(QString::fromUtf8("cityListOptimalTravel"));
        cityListOptimalTravel->setGeometry(QRect(330, 48, 299, 241));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(330, 10, 299, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 916, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionLoad_Extended);
        menuFile->addAction(actionAdmin);
        menuFile->addAction(actionExit);
        menuFile->addAction(actionLog_Out);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdmin->setText(QApplication::translate("MainWindow", "Admin", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        actionLoad->setText(QApplication::translate("MainWindow", "Load", nullptr));
#ifndef QT_NO_TOOLTIP
        actionLoad->setToolTip(QApplication::translate("MainWindow", "Load in cities", nullptr));
#endif // QT_NO_TOOLTIP
        actionLog_Out->setText(QApplication::translate("MainWindow", "Log Out", nullptr));
        actionLoad_Extended->setText(QApplication::translate("MainWindow", "Load Extended", nullptr));
        label->setText(QApplication::translate("MainWindow", "List of Cities:", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Starting City:", nullptr));
        buttonGenerate->setText(QApplication::translate("MainWindow", "Generate", nullptr));
        OptimalTravel->setText(QApplication::translate("MainWindow", "Berlin Travel", nullptr));
        OptimalTravel_2->setText(QApplication::translate("MainWindow", "Paris Travel", nullptr));
        customPlan->setText(QApplication::translate("MainWindow", "Create Plan", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Select City to Add/Edit Food", nullptr));
        pushButton_loadFoods->setText(QApplication::translate("MainWindow", "Load Foods", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Select Food to Edit/Delete", nullptr));
        pushButton_changePrice->setText(QApplication::translate("MainWindow", "Change Price", nullptr));
        pushButton_deleteFood->setText(QApplication::translate("MainWindow", "Delete Food", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "New Food Name:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "New Food Cost", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Add Food", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Optimal Travel Plan:", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
