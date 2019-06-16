#include <SDL2/SDL.h>
#include <iostream>

int main(int argc, char **argv) {
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		std::cout << "SDL_Error: " << SDL_GetError() << std::endl;
		return (1);
	}
	SDL_Window *window = SDL_CreateWindow("ft_gkrellm", 100, 100, 240, 640, SDL_WINDOW_SHOWN); //create the window
	SDL_Renderer *ren = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC); //create renderer to draw to the screen
	if (ren == nullptr) {
		SDL_DestroyWindow(window);
		std::cout << "SDL_Error: " << SDL_GetError() << std::endl;
		SDL_Quit();
	}
	SDL_Quit();
}
