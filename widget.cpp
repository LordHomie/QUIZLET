#include "widget.h"
#include "ui_widget.h"
#include "secdialog.h"
#include "thidialog.h"




Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton *ptr= ui->close;
    QObject::connect(ptr, SIGNAL(CLICKED()), this, SLOT(close()));

    //connect(add, SIGNAL (released()), this, SLOT (add()));
    //connect(read_button,SIGNAL (released()), this, SLOT (read_clicked()));
}
Widget::~Widget()
{
    delete ui;
}

/*
void Widget::add()
{
  add->resize(100,100);
}
*/

void Widget::on_add_clicked()
{

    SecDialog secDeialog;
    secDeialog.setModal(true);
    //add->setText("Example");
    secDeialog.exec();

}


void Widget::on_read_clicked()
{
    thidialog Thidialog;
    Thidialog.setModal(true);
    Thidialog.exec();
}
