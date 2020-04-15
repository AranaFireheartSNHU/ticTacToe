#include <iostream>
#include <cstdio>

#include "ticTacToe.h"
#include "ui_TicTacToeMainWindow.h"

void displayResults(float currentBank, float currentBet);

TicTacToeMainWindow :: TicTacToeMainWindow(QMainWindow *parent):
// Build a GUI  main window for two dice.

        firstRoll{ true }
{
    setupUi(this);

    QObject::connect(rollButton, SIGNAL(clicked()), this, SLOT(rollButtonClickedHandler()));
}
void TicTacToeMainWindow::printStringRep() {
    // String representation for Craps.
    return;
}
void TicTacToeMainWindow::updateUI() {
//    printf("Inside updateUI()\n");
    }



// Player asked for another roll of the dice.
void TicTacToeMainWindow::rollButtonClickedHandler() {
    printf("Inside rollButtonClickedHandler()\n");
    updateUI();
}