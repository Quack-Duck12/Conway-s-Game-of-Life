#include "raylib.h"
#include "raymath.h"
#include "raylib_colors_plus.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#define WIDTH 2240
#define HEIGHT 1260

// Prefer 2^n values
#define CELL_SIZE 8

#define CELL_W (int)(WIDTH / CELL_SIZE)
#define CELL_H (int)(HEIGHT / CELL_SIZE)

#define BG_COLOR BLACK
#define CELL_COLOR WHITE

void raiseError(const char* msg, uint8_t shouldExit){
    fprintf(stderr, "Error: %s\n", msg);
    if(shouldExit) exit(EXIT_FAILURE);
}

void loadBuffer(const char* filepath, uint8_t (*buffer)[CELL_H]);

Color assignColor(uint8_t CellID);
uint8_t countNeighbour(uint8_t (*buffer)[CELL_H], uint16_t posX, uint16_t posY);
uint8_t updateCellState(uint8_t selfState, uint8_t Neighbours);
void drawBoundry();

int main(int argc, const char* argv[]){

    uint8_t fileBuffer = argc - 1;

    static uint8_t _buffer_1[CELL_W][CELL_H] = { 0 };
    static uint8_t _buffer_2[CELL_W][CELL_H] = { 0 };

    if (fileBuffer)
        loadBuffer(argv[1], _buffer_1);

    uint8_t (*buffers[2])[CELL_H] = { _buffer_1, _buffer_2 };

    uint8_t state = 0;
    uint8_t mode = 0;

    uint32_t targetFPS = fileBuffer > 1 ? atoi(argv[2]) : 130;
    SetConfigFlags(FLAG_WINDOW_UNDECORATED);
    InitWindow(WIDTH, HEIGHT, "Window");
    SetTargetFPS(targetFPS);

    // for(int i = 20; i < 24; i++){
    //     for(int j = 20; j < 25; j++){
    //         buffers[state][i][j] = 1;
    //     }
    // }

    while(!WindowShouldClose()){

        Vector2 mouseCoords = GetMousePosition();
        Vector2 cellPos = Vector2Clamp( (Vector2){
                            (int) (mouseCoords.x / CELL_SIZE),
                            (int) (mouseCoords.y / CELL_SIZE)
                        },
                    (Vector2){0, 0},
                    (Vector2){CELL_W - 1, CELL_H - 1});

        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)){
                buffers[state][(uint16_t)cellPos.x][(uint16_t)cellPos.y] = 1;
            }
        else if(IsMouseButtonDown(MOUSE_BUTTON_RIGHT)){
                buffers[state][(uint8_t)cellPos.x][(uint8_t)cellPos.y] = 0;
            }

        if(IsKeyPressed(KEY_KP_ADD)){
            targetFPS += 5;
            SetTargetFPS(targetFPS);
        }
        else if(IsKeyPressed(KEY_KP_SUBTRACT)){
            targetFPS -= 5;
            SetTargetFPS(targetFPS);
        }

        if(IsKeyPressed(KEY_SPACE)){
            mode = !mode;
        }

        BeginDrawing();

            ClearBackground(BG_COLOR);

            for(int x = 0; x < CELL_W; x++){
                for(int y = 0; y < CELL_H; y++){
                    DrawRectangle(x*CELL_SIZE, y*CELL_SIZE, CELL_SIZE, CELL_SIZE, assignColor(buffers[state][x][y]));
                }
            }

            drawBoundry();

            #ifdef _DEBUG
                DrawFPS(10, 10);
                DrawText(TextFormat("%d, %d", CELL_W, CELL_H), 10, 30, 30, BLUE);
                DrawText(TextFormat("Mode: %d", mode), 10, 65, 30, BLUE);
                DrawText(TextFormat("State: %d", state), 10, 100, 30, BLUE);
            #else
                DrawText(TextFormat("Editing Mode: %d", !mode), 10, 0, 30, BLUE);
            #endif

        EndDrawing();

        if(mode){
            state = !state;
            for(int x = 0; x < CELL_W; x++){
                    for(int y = 0; y < CELL_H; y++){
                        buffers[state][x][y] = updateCellState(buffers[!state][x][y], countNeighbour(buffers[!state], x, y));
                }
            }
        }

    }

    CloseWindow();

    return 0;
}

void drawBoundry(){
    for(int i = 0; i < CELL_H; i++){
        DrawLine(0, i * CELL_SIZE, WIDTH, i * CELL_SIZE, WHITE_ALPHA_40);
    }
    for(int i = 0; i < CELL_W; i++){
        DrawLine(i * CELL_SIZE, 0, i * CELL_SIZE, HEIGHT, WHITE_ALPHA_40);
    }
}

Color assignColor(uint8_t CellID){
    switch (CellID){
        case 0:
            return BG_COLOR;
        case 1:
            return CELL_COLOR;
        default:
            return PURPLE;
    }
}

uint8_t countNeighbour(uint8_t (*buffer)[CELL_H], uint16_t posX, uint16_t posY){
    int n = 0;
    for(int dx = -1; dx < 2; dx++){
        for(int dy = -1; dy < 2; dy++){
            if(dx == 0 && dy == 0){ continue;}
            int i = posX + dx;
            int j = posY + dy;
            
            if (i < 0)
                i = CELL_W - 1;
            else if (i >= CELL_W)
                i = 0;

            if (j < 0)
                j = CELL_H - 1;
            else if (j >= CELL_H)
                j = 0;

            if(buffer[i][j]){ n++;}
        }
    }
    return n;
}

uint8_t updateCellState(uint8_t selfState, uint8_t neighbours)
{
    // Alive if dead and neighour = 3
    if (!selfState)
        return neighbours == 3;

    // Stay alive if neighour = 2 or 3
    return neighbours == 2 || neighbours == 3;
}

void loadBuffer(const char* filepath, uint8_t (*buffer)[CELL_H]){
    FILE* fptr = fopen(filepath, "r");
    printf("fptr = %p\n", (void *)fptr);
    if(fptr == NULL){
        raiseError("Unable to load outside buffer", 1);
    }
    
    int c = 0;

    for (int y = 0; y < CELL_H && c != EOF; y++){
        for (int x = 0; x < CELL_W;){
            c = fgetc(fptr);
            if (c == EOF)
                break;

            if (c == '\n')
                break;

            if (c == '0' || c == '1')
            {
                buffer[x][y] = c - '0';
                x++;
            }
        }
    }

    fclose(fptr);
}