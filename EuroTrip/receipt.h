#ifndef RECEIPT_H
#define RECEIPT_H

#include <QDialog>
#include "city.h"

namespace Ui {
class Receipt;
}

class Receipt : public QDialog
{
    Q_OBJECT

public:
    explicit Receipt(QWidget *parent = nullptr);

    void addData(QVector<City> data);
    //void addData(QVector<QVector<QPair<QString, double>>>);
    //Function to add data from foodplanner to purchasedFood vector
    void printReceipt();
    //Function to print reciept.

    ~Receipt();

private:
    Ui::Receipt *ui;
    QVector<City> purchasedFood;
};

#endif // RECEIPT_H
