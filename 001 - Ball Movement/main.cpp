#include <iostream>
#include "raylib.h"

int main()
{
    InitWindow(800,800,"Ball Game");
    Color green = { 23,0,0,255 };
    int ball_x = 400;
    int ball_y = 400;
    SetTargetFPS(60);


    while (WindowShouldClose() == false) {
        
        if (IsKeyDown(KEY_RIGHT)) {
            ball_x += 3;
        }
        else if (IsKeyDown(KEY_LEFT)) {
            ball_x -= 3;
        }
        else if (IsKeyDown(KEY_UP)) {
            ball_y -= 3;
        }
        else if (IsKeyDown(KEY_DOWN)) {
            ball_y += 3;
        }
        BeginDrawing();

        ClearBackground(BLACK);
        DrawCircle(ball_x, ball_y, 20, WHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
