#ifndef WIDGET_H
#define WIDGET_H

#include "delete1.h"
#include <QWidget>
#include "add_window.h"
#include "read_window.h"
#include <QTextEdit>
#include <QTextBrowser>

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

    void on_delete_line_clicked();

    void on_edit_clicked();

private:
    Ui::Widget *ui;

};
#endif // WIDGET_H
