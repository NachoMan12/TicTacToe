#include "tictactoe.h"
#include <iostream>

int main () {
    std::cout << "Zeilen: ";
    int rows;
    std::cin >> rows;
    std::cout << "Spalten: ";
    int columns;
    std::cin >> columns;

    TicTacToe tictactoe (rows, columns);
    tictactoe.outputGrid ();

    for (int i = 0; i < tictactoe.getMaxFields (); ++i) {
        char player = (i % 2)? 'X' : 'O';
        int row;
        int column;
        do {
            std::cout << "Spieler 1 ist an der Reihe" << std::endl;
            std::cout << "Zeile: ";
            std::cin >> row;
            std::cout << "Spalte: ";
            std::cin >> column;
            tictactoe.changePlayerSolution (row, column, player);
            tictactoe.outputGrid ();
        } while (!goOn);
        
        if (tictactoe.checkPlayerWin (row, column, player)) {
            break;
        }
    }

    std::cout << "Das Spiel ist aus" << std::endl << std::endl;
}
