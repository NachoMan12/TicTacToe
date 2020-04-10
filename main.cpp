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
        int row;
        int column;
        if (i % 2 == 0) {

            do {
                std::cout << "Spieler 1 ist an der Reihe" << std::endl;
                std::cout << "Zeile: ";
                std::cin >> row;
                std::cout << "Spalte: ";
                std::cin >> column;
                tictactoe.changePlayerOneSolution (row, column);
                tictactoe.outputGrid ();
            } while (goOn == false);
        }

        else {
            int row;
            int column;
            do {

                std::cout << "Spieler 2 ist an der Reihe" << std::endl;
                std::cout << "Zeile: ";
                std::cin >> row;
                std::cout << "Spalte: ";
                std::cin >> column;
                tictactoe.changePlayerTwoSolution (row, column);
                tictactoe.outputGrid ();
            } while (goOn == false);
        }
        bool win = false;
        win = tictactoe.checkPlayerOneWin (row, column);
        if (win == true) {
            break;
        }
        bool win2 = false;
        win2 = tictactoe.checkPlayerTwoWin (row, column);
        if (win2 == true) {
            break;
        }
    }

    std::cout << "Das Spiel ist aus" << std::endl << std::endl;
}
