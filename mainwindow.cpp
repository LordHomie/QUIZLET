#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "add_window.h"
#include "read_window.h"
#include "ui_read_window.h"
#include "delete1.h"
#include "ui_delete1.h"
#include "edit.h"
#include "ui_edit.h"
#include "quizlet.h"
#include "QString"
#include "QTextEdit"
#include <QTextEdit>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("main menu");
    QPushButton *ptr= ui->close;
    QObject::connect(ptr, SIGNAL(CLICKED()), this, SLOT(close()));

}
Widget::~Widget()
{
    delete ui;
}


void Widget::on_add_clicked()
{

    SecDialog secDeialog;
    secDeialog.setModal(true);
    secDeialog.exec();

}


void Widget::on_read_clicked()
{
    thidialog Thidialog;
    Thidialog.setModal(true);
    Thidialog.exec();

}


void Widget::on_delete_line_clicked()
{

    delete1 del;
    del.setModal(true);
    del.exec();

}


void Widget::on_edit_clicked()
{
    edit ed;
    ed.setModal(true);
    ed.exec();
}
