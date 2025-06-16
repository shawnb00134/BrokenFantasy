#include "raylib.h"
#include "Manager/MenuManager.h"

int main(void)
{
    const int screenWdith = 800;
    const int screenHeight = 600;

    InitWindow(screenWdith, screenHeight, "Menu Manager In Progress");

    SetTargetFPS(120);

    Manager::MenuManager menuManager;

    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        BeginDrawing();
    	ClearBackground(WHITE);

        menuManager.Draw();

        DrawFPS(10, 10);
        EndDrawing();
    }

    CloseWindow();        // Close window and OpenGL context

    return 0;
}