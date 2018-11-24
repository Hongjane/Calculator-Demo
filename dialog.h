#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "model.h"
#include <QString>

namespace Ui {
class dialog;
}

class dialog : public QDialog
{
    Q_OBJECT

public:
    explicit dialog(QWidget *parent = 0);
    ~dialog();

private slots:
    void getBtn0();
    void getBtn1();
    void getBtn2();

    void on_btn_3_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_plus_clicked();

    void on_btn_min_clicked();

    void on_btn_mul_clicked();

    void on_btn_div_clicked();

    void on_btn_equal_clicked();

    void on_btn_clear_clicked();

private:
    QString tmp;
    Ui::dialog *ui;
    model * model_1;
};

#endif // DIALOG_H
