#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // string Notation
    connect(ui->stringNotationButton, SIGNAL(clicked()), this, SLOT(change_text_string_notation()));

    // Functor Notation
    connect(ui->functorNotationButton, &QPushButton::clicked, this, &Widget::change_text_functor_notation);

    // Functor Lambda Notation
    connect(ui->functorLambdaNotationButton, &QPushButton::clicked, [=](){
            ui->functorLambdaNotationLabel->setText("Changed from: Functor Lambda Function");
        }
    );
}

Widget::~Widget()
{
    delete ui;
}

void Widget::change_text_string_notation()
{
    ui->stringNotationLabel->setText("Changed from: String Notation Function");
}

void Widget::change_text_functor_notation()
{
    ui->functorNotationLabel->setText("Changed from: Functor Function");
}
