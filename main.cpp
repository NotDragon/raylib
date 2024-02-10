#include "raylib.h"

int main() {
     const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(BLACK);

            DrawText("Hello World", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();


    return 0;
}