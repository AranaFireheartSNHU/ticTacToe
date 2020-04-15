//
// Created by Arana Fireheart on 2/2/20.
//

#ifndef TICTACTOESTARTER_TICTACTOE_H
#define TICTACTOESTARTER_TICTACTOE_H

#include "ui_TicTacToeMainWindow.h"
#include <QMainWindow>

class TicTacToeMainWindow : public QMainWindow, private Ui::TicTacToeMainWindow {
Q_OBJECT

public:
    TicTacToeMainWindow(QMainWindow *parent = nullptr);
    void printStringRep();
    void updateUI();

private:
    bool firstRoll;

public Q_SLOTS:
    void rollButtonClickedHandler();

};

#endif //TICTACTOESTARTER_TICTACTOE_H
