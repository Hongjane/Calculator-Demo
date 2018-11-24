#include "dialog.h"
#include "ui_dialog.h"

dialog::dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog)
{
    ui->setupUi(this);
    connect(this->ui->btn_0, SIGNAL(clicked(bool)), this, SLOT(getBtn0()));
    connect(this->ui->btn_1, SIGNAL(clicked(bool)), this, SLOT(getBtn1()));
    connect(this->ui->btn_2, SIGNAL(clicked(bool)), this, SLOT(getBtn2()));
    this->model_1 = new model;
    this->tmp = "";
}

dialog::~dialog()
{
    delete ui;
}

void dialog::getBtn0()
{
    if(this->tmp != ""){
        this->tmp += this->ui->btn_0->text();
        this->ui->lb_display->setText(this->tmp);
    }
}

void dialog::getBtn1(){
    this->tmp += this->ui->btn_1->text();
    this->ui->lb_display->setText(this->tmp);
}

void dialog::getBtn2(){
    this->tmp += this->ui->btn_2->text();
    this->ui->lb_display->setText(this->tmp);
}

void dialog::on_btn_3_clicked()
{
    this->tmp += this->ui->btn_3->text();
    this->ui->lb_display->setText(this->tmp);
}

void dialog::on_btn_4_clicked()
{
    this->tmp += this->ui->btn_4->text();
    this->ui->lb_display->setText(this->tmp);
}

void dialog::on_btn_5_clicked()
{
    this->tmp += this->ui->btn_5->text();
    this->ui->lb_display->setText(this->tmp);
}

void dialog::on_btn_6_clicked()
{
    this->tmp += this->ui->btn_6->text();
    this->ui->lb_display->setText(this->tmp);
}

void dialog::on_btn_7_clicked()
{
    this->tmp += this->ui->btn_7->text();
    this->ui->lb_display->setText(this->tmp);
}

void dialog::on_btn_8_clicked()
{
    this->tmp += this->ui->btn_8->text();
    this->ui->lb_display->setText(this->tmp);
}

void dialog::on_btn_9_clicked()
{
    this->tmp += this->ui->btn_9->text();
    this->ui->lb_display->setText(this->tmp);
}

void dialog::on_btn_plus_clicked()
{
    int num = this->tmp.toInt();
    this->model_1->setNum1(num);
    this->tmp = "";
    QString ex = this->ui->btn_plus->text();
    this->model_1->setFlag(ex);
}

void dialog::on_btn_min_clicked()
{
    int num = this->tmp.toInt();
    this->model_1->setNum1(num);
    this->tmp = "";
    QString ex = this->ui->btn_min->text();
    this->model_1->setFlag(ex);
}

void dialog::on_btn_mul_clicked()
{
    int num = this->tmp.toInt();
    this->model_1->setNum1(num);
    this->tmp = "";
    QString ex = this->ui->btn_mul->text();
    this->model_1->setFlag(ex);
}

void dialog::on_btn_div_clicked()
{
    int num = this->tmp.toInt();
    this->model_1->setNum1(num);
    this->tmp = "";
    QString ex = this->ui->btn_div->text();
    this->model_1->setFlag(ex);
}

void dialog::on_btn_equal_clicked()
{
    int num = this->tmp.toInt();
    this->model_1->setNum2(num);
    QString res = this->model_1->doCalcu();
    this->ui->lb_display->setText(res);
    this->tmp = "";
}

void dialog::on_btn_clear_clicked()
{
    this->tmp = "";
    this->ui->lb_display->setText("0");
}
