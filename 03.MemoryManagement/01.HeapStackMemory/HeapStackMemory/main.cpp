/**
 * @file main.cpp
 * @brief This file contains the implementation of the House testing application.
 */

#include "house.h"
#include <iostream>>
#include <QCoreApplication>

/**
 * @brief Allocates memory for a House object either on the stack or the heap based on the input string.
 *
 * @param str QString - Represents the allocation type ("stack" or "heap").
 */
void testHeapStackMemory(QString str) {
    if (str == "stack") {
        House h1(nullptr, "Hello from the Stack");
        h1.printInfo();
    } else {
        House *h1 = new House(nullptr, "Hello from the Heap");
        h1->printInfo();
        delete h1;
    }
}

/**
 * @brief The main function that initializes a Qt application and tests the memory allocation for the House class.
 *
 * @param argc int - Number of command line arguments.
 * @param argv char* - Command line arguments.
 * @return int - Exit code.
 */
int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    qDebug() << "Starting the test..";
    testHeapStackMemory("stack");
    qDebug() << "Ending of the test...";

    qDebug() << "-----------------------------------";

    qDebug() << "Starting the test..";
    testHeapStackMemory("heap");
    qDebug() << "Ending of the test...";

    return a.exec();
}
