#pragma once
#include <vector>
#include <raylib.h>

class Grid
{
public:
    int grid[20][10];

    Grid();
    void Initialize();
    void Print();

private:
    int numRows;
    int numColumns;
    int cellSize;
    std::vector<Color> colors;

    std::vector<Color> GetCellColors();
};
