#include <raylib.h>
#include "grid.h"
#include "blocks.cpp"

int main()
{
    Color darkBlue = {44, 44, 127, 255};

    InitWindow(300, 600, "Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();

    TBlock block = TBlock();

    // Simluation Loop
    while (WindowShouldClose() == false)
    {
        // 1. Event Handling

        // 2. Updating State

        // 3. Drawing
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.Draw();
        block.Draw();

        EndDrawing();
    }

    CloseWindow();
}