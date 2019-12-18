#ifndef DELETE1_H
#define DELETE1_H

#include <QDialog>

namespace Ui {
class delete1;
}

class delete1 : public QDialog
{
    Q_OBJECT

public:
    explicit delete1(QWidget *parent = nullptr);
    ~delete1();

private slots:
    void on_delete_line_clicked();

    void on_showlines_clicked();

private:
    Ui::delete1 *ui;

};

#endif // DELETE1_H
