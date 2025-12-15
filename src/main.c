#include <SDL2/SDL.h>
#include <stdio.h>

#include "/c-sdl2-game/include/defs.h"

int main(void) {

    SDL_Window *window = SDL_CreateWindow("Game", SDL_WINDOWPOS_CENTERED,
                                         SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH,
                                         SCREEN_HEIGHT, 0);

    SDL_ShowWindow(window);

    SDL_Delay(5000);

    return 0;
}
