#include "thidialog.h"
#include "ui_thidialog.h"

thidialog::thidialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thidialog)
{
    ui->setupUi(this);
}

thidialog::~thidialog()
{
    delete ui;
}
