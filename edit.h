#ifndef EDIT_H
#define EDIT_H

#include <QDialog>

namespace Ui {
class edit;
}

class edit : public QDialog
{
    Q_OBJECT

public:
    explicit edit(QWidget *parent = nullptr);
    ~edit();

private slots:
    void on_showline_clicked();

    void on_deleteline_clicked();

    void on_addline_clicked();


private:
    Ui::edit *ui;
};

#endif // EDIT_H
