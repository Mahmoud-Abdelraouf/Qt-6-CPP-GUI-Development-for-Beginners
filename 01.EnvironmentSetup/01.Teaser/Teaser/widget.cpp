#include "widget.h"
#include "./ui_widget.h"
#include <QMessageBox>
#include <QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_submitButton_clicked()
{
    // Get the user information which he entered
    QString firstName = ui->firstNameLineEdit->text();
    QString lastName = ui->lastNameLineEdit->text();
    QString userInput = ui->messageTextEdit->toPlainText();

    // Create a message with plain text
    QString plainMessage = "Hello " + firstName + " " + lastName + "!\n";
    plainMessage += "You typed: " + userInput;

    // Display a message box with plain text
    QMessageBox messageBox;
    messageBox.setWindowTitle("Greetings");
    messageBox.setText(plainMessage);
    messageBox.exec();
}

