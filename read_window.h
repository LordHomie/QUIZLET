#ifndef THIDIALOG_H
#define THIDIALOG_H

#include <QDialog>
#include <QTextBrowser>
#include <QTextEdit>
#include <QVector>
#include <QString>
#include<vector>
namespace Ui {
class thidialog;
}

class thidialog : public QDialog
{
    Q_OBJECT

public:
    explicit thidialog(QWidget *parent = nullptr);
    ~thidialog();

    int index = 0;
    QVector <QString> words;

private slots:
    void on_start_clicked();

    void on_next_clicked();

    void on_previous_clicked();

    void on_translation_clicked();

private:
    Ui::thidialog *ui;

};

#endif // THIDIALOG_H
