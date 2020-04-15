//
// Created by Arana on 2/18/20.
//
#include <iostream>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include "ticTacToe.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    TicTacToeMainWindow crapsApp;

    crapsApp.updateUI();
    crapsApp.show();
    return app.exec();
}

