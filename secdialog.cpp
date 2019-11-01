#include "widget.h"
#include "secdialog.h"
#include "quizlet.h"
#include "ui_secdialog.h"


SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);

    //connect(add, SIGNAL (released()), this, SLOT (handleButton()));
}

SecDialog::~SecDialog()
{
    delete ui;
}

void quizlet::AddWord()
{


}

void SecDialog::on_add_clicked()
{


    quizlet Quizlet;
    Quizlet.AddWord();
    Quizlet.exec();


}


