#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>

int
main()
{
 if (SDL_Init(SDL_INIT_VIDEO) < 0) {
            fprintf(stderr, "Couldn't init SDL2: %s\n", SDL_GetError());
            exit(1);
    }
    else
            printf("SDL2 successfully started!\n");  
}
