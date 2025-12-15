#include <SDL2/SDL.h>
#include <stdio.h>

#include "/c-sdl2-game/include/defs.h"

void initGame(void) {
    SDL_Init(SDL_INIT_VIDEO);
    
    SDL_Window* window = SDL_CreateWindow("Game", SDL_WINDOWPOS_UNDEFINED,
                                         SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                                         SCREEN_HEIGHT, 0);

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    SDL_SetRenderDrawColor(renderer, 100, 149, 237, 255);

    SDL_RenderClear(renderer);

    SDL_RenderPresent(renderer);
}