#include "raylib.h"
#include <cmath>
#include <string> //what type of language need to include string -_-
#include <iostream>
#include <vector>
using namespace std;


int main() {

    InitWindow(500, 500, "Game");
    SetTargetFPS(60);
    
    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(WHITE);
        DrawText("Hello World!",10,10,50,BLACK);

        EndDrawing();

    }

    CloseWindow();
    return 0;//as much this is useless it use important
}
