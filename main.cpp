#include<SDL.h>
#undef main
int main(){
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window;
    window = SDL_CreateWindow("Title",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,
                              600,400,SDL_WINDOW_SHOWN);
    SDL_Renderer *renderer ;
    renderer = SDL_CreateRenderer(window,-1,0);
    SDL_SetRenderDrawColor(renderer,0,255,0,255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
    SDL_Delay(30000);
    return 0 ;
}
