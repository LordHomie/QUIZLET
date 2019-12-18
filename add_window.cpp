#include "mainwindow.h"
#include "add_window.h"
#include "quizlet.h"
#include "ui_add_window.h"
#include <QWidget>

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
    setWindowTitle("add a word");
}

SecDialog::~SecDialog()
{
    delete ui;
}


void SecDialog::on_add_clicked()
{

    QString word = ui->lineEdit->text();
    QString translation = ui->lineEdit_2->text();

    if(ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty()){

        }

    else{
            ui->add->setEnabled(true);
            Quizlet quizlet;
            quizlet.AddWord(word.toStdString(), translation.toStdString());
        }

}
