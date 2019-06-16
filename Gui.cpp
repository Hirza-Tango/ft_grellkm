#include <Gui.hpp>
#include <iostream>

//This works just like the minilibx library.
//We have an int for each pixel
//alpha, red, green and blue

Gui::Gui(void) {
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        std::cout << "SDL_Error" << SDL_GetError() << std::endl;
        return;
    }
    this->_window = SDL_CreateWindow("ft_gkrellm", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 240, 640, SDL_WINDOW_SHOWN);
    //The height should be calculated at runtime. TODO
    this->_renderer = SDL_CreateRenderer(this->_window, -1, 0);
    this->_texture = SDL_CreateTexture(this->_renderer, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STATIC, 240, 640);
    this->_pixels = new Uint32[240 * 640];
    memset(this->_pixels, 255, 240 * 640 * sizeof(Uint32)); //set initial white background
}

void Gui::quitExec(void) {
	delete[] this->_pixels;
	SDL_DestroyTexture(this->_texture);
	SDL_DestroyRenderer(this->_renderer);
	SDL_DestroyWindow(this->_window);
	SDL_Quit();
}

Gui::~Gui(void) {
}

Gui const & Gui:: operator = (Gui const & rhs) {
    return (rhs);
}

void Gui::Draw(unsigned int const x, unsigned int const y, Uint32 color) {
	int rX = x * 4;
	int loc = rX * y;
	this->_pixels[loc] = color; //I guess this will print the pixels...
}

void Gui::run(void) {
	while (!Gui::quit) {
		SDL_UpdateTexture(this->_texture, NULL, this->_pixels, 240 * sizeof(Uint32)); //write to the screen
		SDL_WaitEvent(&this->_event);

		switch (this->_event.type) {
			case SDL_QUIT:
				Gui::quit = true;
		}
		SDL_RenderClear(this->_renderer);
		SDL_RenderCopy(this->_renderer, this->_texture, NULL, NULL);
		SDL_RenderPresent(this->_renderer);
	}
	if (Gui::quit) {
		this->quitExec();
	}
}

bool Gui::quit = false;
