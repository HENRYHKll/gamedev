#include <iostream>
#include <SDL2/SDL_version.h>

int main(int acrgc, char** args)
{
       SDL_version compiled;
       SDL_version linked;

       SDL_VERSION(&compiled);
       SDL_GetVersion(&linked);
       std::cout << "We compiled against SDL version "
                 << static_cast<int>(compiled.major) << "."
                 << static_cast<int>(compiled.minor) << "."
                 << static_cast<int>(compiled.patch) << std::endl;
      
       std::cout << "But we are linking against SDL version "
                 << static_cast<int>(linked.major) << "."
                 << static_cast<int>(linked.minor) << "."
                 << static_cast<int>(linked.patch) << std::endl;
      
       return std::cout.good() ? 0 : 1;
}