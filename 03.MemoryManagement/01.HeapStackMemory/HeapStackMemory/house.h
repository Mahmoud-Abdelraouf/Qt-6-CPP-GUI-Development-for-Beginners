#ifndef HOUSE_H
#define HOUSE_H

#include <QObject>

class House : public QObject
{
    Q_OBJECT
public:
    explicit House(QObject *parent = nullptr, const QString &description="");
    ~House();
    void printInfo() const;

private:
    QString descriptionMessage;
};

#endif // HOUSE_H
