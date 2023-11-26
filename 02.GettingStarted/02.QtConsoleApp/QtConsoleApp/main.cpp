#include <QCoreApplication>
#include <QDebug>
#include <QDate>
#include <QRect>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Date:" << QDate::currentDate();
    qDebug() << "Types:" << QString("String") << QChar('x') << QRect(0, 10, 50, 40);
    qDebug() << "Custom coordinate type:" << &qTerminate;


    return a.exec();
}
