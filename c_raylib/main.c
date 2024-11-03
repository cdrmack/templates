#include <raylib.h>

const int kWindowWidth = 800;
const int kWindowHeight = 600;

int main(int argc, char **argv)
{
    InitWindow(kWindowWidth, kWindowHeight, argv[0]);

    const Rectangle rect = {
        .x = 20.0, .y = 20.0, .width = 100.0, .height = 100.0};

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawRectangleRec(rect, WHITE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
