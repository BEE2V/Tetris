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

private:
    int numRows;
    int numColumns;
    int cellSize;
    std::vector<Color> colors;
};
