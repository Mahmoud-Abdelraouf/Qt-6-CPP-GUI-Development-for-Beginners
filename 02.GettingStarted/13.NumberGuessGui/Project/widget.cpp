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
    qDebug() << "The Secret number is:" << QString::number(secret_number);

    // Disable the start over button
    ui->startOverButton->setDisabled(true);

    // set the text of the message label to be empty
    ui->messageLabel->setText("");

    // Disable maximize button
    Qt::WindowFlags flags = windowFlags();
    flags &= ~(Qt::WindowMaximizeButtonHint); // Disables maximize buttons
    flags |= Qt::MSWindowsFixedSizeDialogHint; // Prevents resizing by dragging window borders
    setWindowFlags(flags);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_guessButton_clicked()
{
    guess_number = ui->numberSpinBox->value();
    qDebug() << "The user guessed:" << QString::number(guess_number);

    // check if the user guess right
    if(guess_number == secret_number) {
        // show a congratulation message
        ui->messageLabel->setText(
            "Congratulation, The No. is " +QString::number(secret_number)
            );

        // Change font for congratulation message
        QFont font("Arial", 12);
        ui->messageLabel->setFont(font);

        // Button housekeeping
        ui->guessButton->setDisabled(true);
        ui->startOverButton->setDisabled(false);


    } else {
        // Help the user to get the correct No
        if(secret_number < guess_number) {
            ui->messageLabel->setText("The No. is lower than that");
        } else {
            ui->messageLabel->setText("The No. is higher than  that");
        }

        // Change font for congratulation message
        QFont font("Arial", 12);
        ui->messageLabel->setFont(font);
    }
}


void Widget::on_startOverButton_clicked()
{
    qDebug() << "Start over button is clicked";

    // Enable the Guess Button again and Disable the StartOver Button
    ui->startOverButton->setDisabled(true);
    ui->guessButton->setDisabled(false);

    // But the snipBox to 1
    ui->numberSpinBox->setValue(1);

    // Generate another secrete No
    secret_number = (std::rand() % 10) + 1;
    qDebug() << "The Secret number is:" << QString::number(secret_number);

    // Clear the Lable message
    ui->messageLabel->clear();

}

