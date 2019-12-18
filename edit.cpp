#include "edit.h"
#include "ui_edit.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "quizlet.h"
#include <QWidget>
#include <QString>
#include <string>

edit::edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit)
{
    ui->setupUi(this);
    setWindowTitle("edit a line");
}

edit::~edit()
{
    delete ui;
}

void edit::on_showline_clicked()
{

    QString token = ui->lineEdit->text();
    string line ;

    if (ui->lineEdit->text().isEmpty()){

    }

    else{
    ui->showline->setEnabled(true);
    Quizlet quizlet;
    line = quizlet.showline(token.toStdString());
    ui->lineEdit_2->setText(QString::fromUtf8(line.c_str()));

    }

}


void edit::on_deleteline_clicked()
{
    QString token = ui->lineEdit->text();

    if(ui->lineEdit->text().isEmpty()){

    }

    else{
            ui->deleteline->setEnabled(true);
            Quizlet quizlet;
            quizlet.DeleteWord(token.toStdString());
        }

}


void edit::on_addline_clicked()
{

    QString word = ui->lineEdit_3->text();
    QString translation = ui->lineEdit_4->text();

    if(ui->lineEdit_3->text().isEmpty() || ui->lineEdit_4->text().isEmpty()){

        }

    else{
            ui->addline->setEnabled(true);
            Quizlet quizlet;
            quizlet.AddWord(word.toStdString(), translation.toStdString());
        }

}
