#include <raylib.h>

int main(int argc, char **argv)
{
    InitWindow(800, 600, "TITLE");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText(argv[0], 40, 40, 20, WHITE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
