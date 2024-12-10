#include <iostream>
#include </opt/homebrew/Cellar/sdl2/2.30.10/include/SDL2/SDL.h>

int main() 
{
    SDL_Init(SDL_INIT_EVERYTHING);
    std::cout << "Hello, world!" << std::endl;
    return 0;
}