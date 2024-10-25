#include <raylib.h>

int main(void)
{
    InitWindow(800, 600, "TITLE");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText("TEXT", 40, 40, 20, WHITE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
