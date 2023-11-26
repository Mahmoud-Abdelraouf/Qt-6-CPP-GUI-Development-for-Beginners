#include "widget.h"
#include "./ui_widget.h"

#include <cstdlib>
#include <ctime>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // set-up the seed
    std::srand(std::time(nullptr)); // use current time as seed for random generator

    //generate a random value from 1 - 10
    secret_number = (std::rand() % 10) + 1;

    // Disable the start over button
    ui->startOverButton->setDisabled(true);

    // set the text of the message label to be empty
    ui->messageLabel->setText("");

    // Disable maximize button
    Qt::WindowFlags flags = windowFlags();
    flags &= ~Qt::WindowMaximizeButtonHint;
    setWindowFlags(flags);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_guessButton_clicked()
{
    guess_number = ui->numberSpinBox->value();

}


void Widget::on_startOverButton_clicked()
{

}
