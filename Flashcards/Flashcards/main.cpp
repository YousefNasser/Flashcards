#include "Flashcards.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Flashcards w;
    w.show();
    return a.exec();
}
