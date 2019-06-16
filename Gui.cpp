#include <Gui.hpp>
#include <iostream>

Gui::Gui(void) {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        std::cout << "SDL_Error" << SDL_GetError() << std::endl;
        return;
    }
    this->_window = SDL_CreateWindow("ft_gkrellm", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 240, 640, SDL_WINDOW_SHOWN);
    //The height should be calculated at runtime. TODO
}

Gui const & Gui:: operator = (Gui const & rhs) {
    return (rhs);
}

void Gui::run(void) {
	while (!Gui::quit) {
		SDL_WaitEvent(&this->_event);

		switch (this->_event.type) {
			case SDL_QUIT:
				Gui::quit = true;
		}
	}
}

bool Gui::quit = false;
