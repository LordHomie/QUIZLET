#include "delete1.h"
#include "ui_delete1.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "quizlet.h"
#include <QWidget>
#include <QString>
#include <string>

delete1::delete1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete1)
{
    ui->setupUi(this);
    setWindowTitle("delete a line");
}

delete1::~delete1()
{
    delete ui;
}

void delete1::on_showlines_clicked()
{
    Quizlet quizlet;
    vector<string> v = quizlet.ReadAllWords();

    std::string result;
    for (size_t i = 0, i_end = v.size(); i < i_end; ++i) {
       result += (i ? "\n " : "");
       result += v[i];
    }

    QString qstr = QString::fromStdString(result);
    ui->textEdit->setText(qstr);
}


void delete1::on_delete_line_clicked()
{
    QString token = ui->lineEdit->text();


    if(ui->lineEdit->text().isEmpty()){
            ui->lineEdit->setText("please type something here!!!");
        }

    else{
            ui->delete_line->setEnabled(true);
            Quizlet quizlet;
            quizlet.DeleteWord(token.toStdString());
        }

}
