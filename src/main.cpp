#include <raylib.h>
#include "game.h"

int main()
{
    Color darkBlue = {44, 44, 127, 255};

    InitWindow(300, 600, "Tetris");
    SetTargetFPS(60);

    Game game = Game();

    // Simluation Loop
    while (WindowShouldClose() == false)
    {
        // 1. Event Handling
        game.HandleInput();

        // 2. Updating State

        // 3. Drawing
        BeginDrawing();
        ClearBackground(darkBlue);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();
}