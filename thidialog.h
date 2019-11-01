#ifndef THIDIALOG_H
#define THIDIALOG_H

#include <QDialog>

namespace Ui {
class thidialog;
}

class thidialog : public QDialog
{
    Q_OBJECT

public:
    explicit thidialog(QWidget *parent = nullptr);
    ~thidialog();

private:
    Ui::thidialog *ui;
};

#endif // THIDIALOG_H
