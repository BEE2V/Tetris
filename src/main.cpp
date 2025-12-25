#include <raylib.h>
#include "grid.h"

int main()
{
    Color darkBlue = {44, 44, 127, 255};

    InitWindow(300, 600, "Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();

    // Simluation Loop
    while (WindowShouldClose() == false)
    {
        // 1. Event Handling

        // 2. Updating State

        // 3. Drawing
        BeginDrawing();
        ClearBackground(darkBlue);
        grid.Draw();

        EndDrawing();
    }

    CloseWindow();
}