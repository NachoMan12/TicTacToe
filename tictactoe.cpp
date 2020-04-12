#include "tictactoe.h"
#include <iostream>
#include <string>


void TicTacToe::initializeGrid () {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            grid[i][j] = '#';
        }
    }
}

void TicTacToe::outputGrid () {
    std::cout << std::endl;
    for (int i = 0; i < rows; ++i) {
        std::cout << '\t';
        for (int j = 0; j < columns; ++j) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void TicTacToe::changePlayerSolution (int row, int column, char player) {
    row -= 1;
    column -= 1;

    if (grid[row][column] == 'X' || grid[row][column] == 'O') {
        std::cout << "Das Feld ist schon belegt" << std::endl;
        goOn = false;
    }
    else {
        grid[row][column] = player;
        goOn = true;
    }
}

