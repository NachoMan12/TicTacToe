#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <iostream>
#include <string>
#include <vector>


inline bool goOn = true;


class TicTacToe {
    public:
    TicTacToe (int rows, int columns) : rows (rows), columns (columns), grid (rows, std::vector<char> (columns)) {
        initializeGrid ();
    }
    int getMaxFields () {
        return maxFields;
    }
    int getRows () {
        return rows;
    }
    int getColumns () {
        return columns;
    }


    /** input from use **/

    void initializeGrid ();
    void outputGrid ();
    void changePlayerOneSolution (int row, int column);
    void changePlayerTwoSolution (int row, int column);
    bool checkPlayerOneWin (int row, int columns);
    bool checkPlayerTwoWin (int row, int columns);

    private:
    int rows;
    int columns;
    int maxFields = rows * columns;
    std::vector<std::vector<char>> grid;
};


#endif