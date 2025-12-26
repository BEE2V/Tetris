#pragma once
#include <vector>
#include <raylib.h>
#include "colors.h"

class Grid
{
public:
    int grid[20][10];

    Grid();
    void Initialize();
    void Draw();
    void Print();
    bool IsCellOutside(int row, int column);
    bool IsCellEmpty(int row, int column);
    int ClearFullRows();

private:
    int numRows;
    int numColumns;
    int cellSize;
    std::vector<Color> colors;

    bool IsRowFull(int row);
    void ClearRow(int row);
    void MoveRowDown(int row, int numRows);
};
