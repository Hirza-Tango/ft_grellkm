#include <SDL2/SDL.h>
#include <iostream>

int main(void) {
	bool quit = false;
	SDL_Event event;
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		std::cout << "SDL_Error: " << SDL_GetError() << std::endl;
		return (1);
	}
	SDL_Window *window = SDL_CreateWindow("ft_gkrellm", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 240, 640, SDL_WINDOW_SHOWN); //create the window
	while (!quit) {
		SDL_WaitEvent(&event);

		switch (event.type) {
			case SDL_QUIT:
				quit = true;
				break;
		}
	}
	SDL_DestroyWindow(window);
	SDL_Quit();
	return (0);
}
