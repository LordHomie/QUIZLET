#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "secdialog.h"
#include "thidialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_add_clicked();

    void on_read_clicked();

private:
    Ui::Widget *ui;
    QPushButton *add;
    QPushButton *read_button;
};
#endif // WIDGET_H
