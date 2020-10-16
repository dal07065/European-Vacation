#include "receipt.h"
#include "ui_receipt.h"
#include <QDebug>

Receipt::Receipt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Receipt)
{
    ui->setupUi(this);
}

void Receipt::addData(QVector<QPair<City, QVector<int>>> data)
{
    for(int loop = 0; loop < data.size(); loop++)
    {
        purchasedFood.push_back(data[loop]);
    }
}


void Receipt::printReceipt()
{
    QFont font("Courier");
    QString boughtFood;
    QString total;
    QString foodPrice;
    QString qty;
    QString totalCity;
    float grandTotal;
    float cityTotal;

    grandTotal = 0;
    cityTotal  = 0;

    ui->textBrowser->setAlignment(Qt::AlignLeft);
    ui->textBrowser->setFont(font);
    for(int loop = 0; loop < purchasedFood.size(); loop++)
    {
        ui->textBrowser->append("   " + purchasedFood[loop].first.getCityName());
        QVector<QPair<QString, double>> cityFood = purchasedFood[loop].first.getAllFood();
        if(!purchasedFood[loop].first.noFood())
        {
            for(int food = 0; food < cityFood.size(); food++)
            {
                boughtFood = cityFood[food].first.leftJustified(22, ' ');
                grandTotal = grandTotal + (cityFood[food].second * purchasedFood[loop].second[food]);
                cityTotal  = cityTotal + (cityFood[food].second * purchasedFood[loop].second[food]);

                foodPrice  = QString::number((cityFood[food].second * purchasedFood[loop].second[food]), 'f', 2);
                foodPrice  = foodPrice.rightJustified(6, ' ');

                qty        = QString::number(purchasedFood[loop].second[food]);
                qty        = qty.rightJustified(3, ' ');

                ui->textBrowser->append("   + " + boughtFood + qty + " $" + foodPrice);
            }
            totalCity = QString::number(cityTotal, 'f', 2);
            totalCity = totalCity.rightJustified(6, ' ');
            ui->textBrowser->append("   Total:                      $" + totalCity);
            cityTotal = 0;
        }
        else
        {
            ui->textBrowser->append("   + N/A                       $  0.00");
        }
    }
    total = QString::number(grandTotal, 'f', 2);
    total = total.rightJustified(6,' ');

    ui->textBrowser->append("  =====================================\n");
    ui->textBrowser->append("                       Total:  $" + total);
    //ui->textBrowser->append("          Total Distance: " + "Put distance here" + "km");
    ui->textBrowser->append("\n       Thank you for using EuroTrip");
    ui->textBrowser->append("             Travel Planner!!!");
    ui->textBrowser->append("           Have a Great Flight!");
}

Receipt::~Receipt()
{
    delete ui;
}
