/*******************************************************************************************
*
*   raylib [core] examples - basic screen manager
*
*   NOTE: This example illustrates a very simple screen manager based on a states machines
*
*   Example originally created with raylib 4.0, last time updated with raylib 4.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2021-2024 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"

//------------------------------------------------------------------------------------------
// Types and Structures Definition
//------------------------------------------------------------------------------------------
typedef enum GameScreen { LOGO = 0, TITLE, GAMEPLAY, ENDING } GameScreen;

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic screen manager");

    GameScreen currentScreen = LOGO;

    // TODO: Initialize all required variables and load all required data here!

    int framesCounter = 0;          // Useful to count frames

    SetTargetFPS(60);               // Set desired framerate (frames-per-second)
    //--------------------------------------------------------------------------------------
    //ALL OUR VARIABLES
    int player_x = screenWidth / 2;
    int player_y = screenHeight / 2;
    int speed = 10; //movement speed
    
    int tileSize = 50; // Size of each square in the checkered pattern

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        switch(currentScreen)
        {
            case LOGO:
            {
                // TODO: Update LOGO screen variables here!

                framesCounter++;    // Count frames

                // Wait for 2 seconds (120 frames) before jumping to TITLE screen
                if (framesCounter > 120)
                {
                    currentScreen = TITLE;
                }
            } break;
            case TITLE:
            {
                // TODO: Update TITLE screen variables here!

                // Press enter to change to GAMEPLAY screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = GAMEPLAY;
                }
            } break;
            case GAMEPLAY:
            {
                // TODO: Update GAMEPLAY screen variables here!

                // Press enter to change to ENDING screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = ENDING;
                }
                
                //movement logic (ensuring only one direction at a time)
                if (IsKeyDown(KEY_RIGHT))
                {
                    player_x += speed;
                }
                else if (IsKeyDown(KEY_LEFT))
                {
                    player_x -= speed;
                }
                else if (IsKeyDown(KEY_UP))
                {
                    player_y -= speed;
                }
                else if (IsKeyDown(KEY_DOWN))
                {
                    player_y += speed;
                }
                
                //player dies if they touch boundary
                if (player_x < 0 || player_x > screenWidth - 50 || 
                    player_y < 0 || player_y > screenHeight - 50)
                {
                    currentScreen = ENDING;  // **Send player to game over screen**
                    player_x = screenWidth / 2;
                    player_y = screenHeight / 2;
                }
    
            } break;
            case ENDING:
            {
                // TODO: Update ENDING screen variables here!

                // Press enter to return to TITLE screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = TITLE;
                }
            } break;
            default: break;
        }
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            switch(currentScreen)
            {
                case LOGO:
                {
                    // TODO: Draw LOGO screen here!
                    DrawText("SNAKE LOGO SCREEN", 20, 20, 40, DARKBLUE);
                    DrawText("WAIT for 2 SECONDS...", 290, 220, 20, DARKPURPLE);

                } break;
                case TITLE:
                {
                    // TODO: Draw TITLE screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, DARKGREEN);
                    DrawText("SNAKE TITLE SCREEN", 20, 20, 40, GREEN);
                    DrawText("PRESS ENTER or TAP to JUMP to GAMEPLAY SCREEN", 120, 220, 20, GREEN);

                } break;
                case GAMEPLAY:
                {
                    //checkered background
                for (int y = 0; y < screenHeight; y += tileSize)
                {
                    for (int x = 0; x < screenWidth; x += tileSize)
                    {
                        if ((x / tileSize + y / tileSize) % 2 == 0)
                            DrawRectangle(x, y, tileSize, tileSize, DARKBLUE);
                        else
                            DrawRectangle(x, y, tileSize, tileSize, BLUE);
                    }
                }
                    
                    // TODO: Draw GAMEPLAY screen here!
                    DrawText("SNAKE GAMEPLAY SCREEN", 20, 20, 40, LIME);
                      
                    DrawText("PRESS ENTER or TAP to JUMP to ENDING SCREEN", 130, 220, 20, LIME);
             
                    //draw player
                    DrawRectangle(player_x, player_y, 50, 50, DARKPURPLE);
                    
                   

                } break;
                case ENDING:
                {
                    // TODO: Draw ENDING screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, DARKPURPLE);
                    DrawText("YOU PERISHED", 20, 20, 40, DARKBLUE);
                    DrawText("PRESS ENTER or TAP to RETURN to TITLE SCREEN", 120, 220, 20, DARKBLUE);

                } break;
                default: break;
            }

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------

    // TODO: Unload all loaded data (textures, fonts, audio) here!

    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
