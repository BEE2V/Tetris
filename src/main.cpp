#include <raylib.h>
#include "game.h"

double lastUpdateTime = 0;

bool EventTriggered(double interval)
{
    double currentTime = GetTime();
    if (currentTime - lastUpdateTime > interval)
    {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}

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
        if (EventTriggered(0.02))
        {
            game.MoveBlockDown();
        }

        // 3. Drawing
        BeginDrawing();
        ClearBackground(darkBlue);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();
}