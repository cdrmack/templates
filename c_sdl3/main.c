#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <stdio.h>

const int kWindowWidth = 800;
const int kWindowHeight = 600;

int main(int argc, char **argv)
{

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("SDL_Init error: %s", SDL_GetError());
        return -1;
    }

    SDL_Window *window = nullptr;
    SDL_Renderer *renderer = nullptr;

    if (SDL_CreateWindowAndRenderer(nullptr, kWindowWidth, kWindowHeight, 0,
                                    &window, &renderer) < 0)
    {
        printf("SDL_CreateWindowAndRenderer error: %s", SDL_GetError());
        return -1;
    }

    SDL_FRect const rect = {.h = 100.0, .w = 100.0, .x = 20, .y = 20};

    SDL_Event e;
    int quit = 1;
    while (quit)
    {
        while (SDL_PollEvent(&e))
        {
            if (e.type == SDL_EVENT_QUIT)
            {
                quit = 0;
            }
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0xFF);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_RenderRect(renderer, &rect);
        SDL_RenderFillRect(renderer, &rect);

        SDL_RenderPresent(renderer);
    }

    SDL_DestroyRenderer(renderer);
    renderer = nullptr;
    SDL_DestroyWindow(window);
    window = nullptr;

    SDL_Quit();

    return 0;
}
