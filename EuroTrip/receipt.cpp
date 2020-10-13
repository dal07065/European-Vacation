#include "receipt.h"
#include "ui_receipt.h"
#include <QDebug>

Receipt::Receipt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Receipt)
{
    ui->setupUi(this);
}

void Receipt::addData(QVector<City> data)
{
    City addCity;

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
    float grandTotal;

    grandTotal = 0;

    ui->textBrowser->setAlignment(Qt::AlignLeft);
    ui->textBrowser->setFont(font);
    for(int loop = 0; loop < purchasedFood.size(); loop++)
    {
        ui->textBrowser->append("   " + purchasedFood[loop].getCityName());
        QVector<QPair<QString, double>> cityFood = purchasedFood[loop].getAllFood();
        if(!purchasedFood[loop].noFood())
        {
            for(int food = 0; food < cityFood.size(); food++)
            {
                boughtFood = cityFood[food].first.leftJustified(22, ' ');
                grandTotal = grandTotal + cityFood[food].second;
                QString foodPrice = QString::number(cityFood[food].second, 'f', 2);
                foodPrice = foodPrice.rightJustified(6, ' ');

                ui->textBrowser->append("   + " + boughtFood + "$" + foodPrice);
            }
        }
        else
        {
            ui->textBrowser->append("   + N/A                   $  0.00");
        }
    }
    total = QString::number(grandTotal, 'f', 2);
    total = total.rightJustified(6,' ');

    ui->textBrowser->append("  =================================\n");
    ui->textBrowser->append("                   Total:  $" + total);
    ui->textBrowser->append("\n    Thank you for using EuroTrip");
    ui->textBrowser->append("          Travel Planner!!!");
    ui->textBrowser->append("        Have a Great Flight!");
}

Receipt::~Receipt()
{
    delete ui;
}
