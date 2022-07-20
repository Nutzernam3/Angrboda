#include "angrboda.h"
#include "ui_angrboda.h"

#include <QTableView>
#include <QTableWidget>

Angrboda::Angrboda(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Angrboda)
{
    ui->setupUi(this);

    QStringList headerList = {"IP", "Server header", "Title", "Login"};
    auto tableWidget =  new QTableWidget(1, 4, this);

    tableWidget->setHorizontalHeaderLabels(headerList);
    ui->horizontalLayout_5->addWidget(tableWidget);

}

Angrboda::~Angrboda()
{
    delete ui;
}



