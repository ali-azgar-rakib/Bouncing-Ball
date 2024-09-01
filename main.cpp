#include <cinttypes>
#include <raylib.h>

int main() {

  int ballx = 400;
  int bally = 400;
  Color green = {20, 160, 133, 255};
  InitWindow(800, 800, "Bouncing Ball");
  SetTargetFPS(60);

  while (WindowShouldClose() == false) {

    if (IsKeyDown(KEY_UP)) {
      bally -= 2;
    }

    if (IsKeyDown(KEY_DOWN)) {
      bally += 2;
    }

    if(IsKeyDown(KEY_RIGHT))
    {
      ballx += 2;
    }

    if(IsKeyDown(KEY_LEFT))
    {
      ballx -= 2;
    }

    BeginDrawing();
    ClearBackground(green);
    DrawCircle(ballx, bally, 20, WHITE);
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
