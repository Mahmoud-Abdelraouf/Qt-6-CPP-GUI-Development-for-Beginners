#include "house.h"
#include <QDebug>

House::House(QObject *parent, const QString &description)
    : QObject{parent}, descriptionMessage(description)
{
    qDebug() << "House Obebject constructed";
}


House::~House()
{
    qDebug() << "House obeject:" << descriptionMessage << "is dying...";
}

void House::printInfo() const
{
    qDebug() << "House:" << descriptionMessage;
}
