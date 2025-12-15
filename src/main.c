#include <SDL2/SDL.h>
#include <stdio.h>

#include "/c-sdl2-game/include/defs.h"
#include "/c-sdl2-game/include/init.h"

int main(void) {
    initGame();

    SDL_Delay(5000);

    /**
     * GAME LOOP PSEUDO
     * 
     * while(1) {
     *  update()
     *      Input
     *      Render New Scene
     * }
     */

    return 0;
}
