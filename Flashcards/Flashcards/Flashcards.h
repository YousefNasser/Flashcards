#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Flashcards.h"

class Flashcards : public QMainWindow
{
    Q_OBJECT

public:
    Flashcards(QWidget *parent = nullptr);
    ~Flashcards();

private:
    Ui::FlashcardsClass* ui;
};
