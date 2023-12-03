/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *titlelabel;
    QVBoxLayout *verticalLayout;
    QPushButton *stringNotationButton;
    QPushButton *functorNotationButton;
    QPushButton *functorLambdaNotationButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *stringNotationLabel;
    QLabel *functorNotationLabel;
    QLabel *functorLambdaNotationLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(716, 312);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        titlelabel = new QLabel(Widget);
        titlelabel->setObjectName(QString::fromUtf8("titlelabel"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        titlelabel->setFont(font);

        verticalLayout_4->addWidget(titlelabel);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stringNotationButton = new QPushButton(Widget);
        stringNotationButton->setObjectName(QString::fromUtf8("stringNotationButton"));

        verticalLayout->addWidget(stringNotationButton);

        functorNotationButton = new QPushButton(Widget);
        functorNotationButton->setObjectName(QString::fromUtf8("functorNotationButton"));

        verticalLayout->addWidget(functorNotationButton);

        functorLambdaNotationButton = new QPushButton(Widget);
        functorLambdaNotationButton->setObjectName(QString::fromUtf8("functorLambdaNotationButton"));

        verticalLayout->addWidget(functorLambdaNotationButton);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        stringNotationLabel = new QLabel(Widget);
        stringNotationLabel->setObjectName(QString::fromUtf8("stringNotationLabel"));

        verticalLayout_2->addWidget(stringNotationLabel);

        functorNotationLabel = new QLabel(Widget);
        functorNotationLabel->setObjectName(QString::fromUtf8("functorNotationLabel"));

        verticalLayout_2->addWidget(functorNotationLabel);

        functorLambdaNotationLabel = new QLabel(Widget);
        functorLambdaNotationLabel->setObjectName(QString::fromUtf8("functorLambdaNotationLabel"));

        verticalLayout_2->addWidget(functorLambdaNotationLabel);


        verticalLayout_4->addLayout(verticalLayout_2);

        QWidget::setTabOrder(stringNotationButton, functorNotationButton);
        QWidget::setTabOrder(functorNotationButton, functorLambdaNotationButton);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Signals and Slots", nullptr));
        titlelabel->setText(QCoreApplication::translate("Widget", "Test a different signals and slots notation", nullptr));
        stringNotationButton->setText(QCoreApplication::translate("Widget", "String Notation", nullptr));
        functorNotationButton->setText(QCoreApplication::translate("Widget", "Functor Notation with regular slot", nullptr));
        functorLambdaNotationButton->setText(QCoreApplication::translate("Widget", "Functor Notation with lambda function", nullptr));
        stringNotationLabel->setText(QCoreApplication::translate("Widget", "Changed from:", nullptr));
        functorNotationLabel->setText(QCoreApplication::translate("Widget", "Changed from:", nullptr));
        functorLambdaNotationLabel->setText(QCoreApplication::translate("Widget", "Changed from:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
