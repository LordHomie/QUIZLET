#include "read_window.h"
#include "ui_read_window.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "quizlet.h"
#include "QString"
#include <vector>
#include <sstream>
#include <string>

thidialog::thidialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thidialog)
{
    ui->setupUi(this);
    setWindowTitle("read all words");
}

thidialog::~thidialog()
{
    delete ui;
}


void thidialog::on_start_clicked()
{


    Quizlet quizlet;
    string str = quizlet.ReadAllWords()[0];

    std::string buf;                 // Have a buffer string
    std::stringstream ss(str);       // Insert the string into a stream

    std::vector<std::string> tokens; // Create vector to hold our words

    while (ss >> buf)
        tokens.push_back(buf);

    ui->textEdit->setText( QString::fromUtf8(tokens[0].c_str()));


}



void thidialog::on_next_clicked()
{
    Quizlet quizlet;

    ++index;
    if (index < quizlet.ReadAllWords().size())
    {
        string str = quizlet.ReadAllWords()[index];
        string buf;                 // Have a buffer string
        stringstream ss(str);       // Insert the string into a stream

        vector<string> tokens; // Create vector to hold our words

        while (ss >> buf)
            tokens.push_back(buf);

        ui->textEdit->setText( QString::fromUtf8(tokens[0].c_str()));
    }

}


void thidialog::on_previous_clicked()
{
    Quizlet quizlet;

    --index;
    if (index < quizlet.ReadAllWords().size())
    {
        string str = quizlet.ReadAllWords()[index];
        string buf;                 // Have a buffer string
        stringstream ss(str);       // Insert the string into a stream

        vector<string> tokens; // Create vector to hold our words

        while (ss >> buf)
            tokens.push_back(buf);
        ui->textEdit->setText( QString::fromUtf8(tokens[0].c_str()));
    }

}


void thidialog::on_translation_clicked()
{
    Quizlet quizlet;
    if (index < quizlet.ReadAllWords().size())
    {
        string str = quizlet.ReadAllWords()[index];
        string buf;                 // Have a buffer string
        stringstream ss(str);       // Insert the string into a stream

        vector<string> tokens; // Create vector to hold our words

        while (ss >> buf)
            tokens.push_back(buf);
        ui->textEdit->setText( QString::fromUtf8(tokens[1].c_str()));
    }

}
