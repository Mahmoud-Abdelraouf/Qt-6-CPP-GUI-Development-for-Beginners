#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // String Notation
    //connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));

    // Lambda Notation
    connect(ui->horizontalSlider, &QSlider::valueChanged, ui->progressBar, [=](){
        ui->progressBar->setValue(ui->horizontalSlider->value());
        }
    );
}

Widget::~Widget()
{
    delete ui;
}
