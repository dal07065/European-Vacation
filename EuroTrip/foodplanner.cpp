#include "foodplanner.h"
#include "ui_foodplanner.h"

foodPlanner::foodPlanner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::foodPlanner)
{
    ui->setupUi(this);
}
void foodPlanner::addCity(City data)
{

}
foodPlanner::~foodPlanner()
{
    delete ui;
}
