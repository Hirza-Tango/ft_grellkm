#include <GuiLetters.hpp>

GuiLetters::GuiLetters(void) {
	TTF_Init();
	this->_font = TTF_Open("./fonts/Roboto-Black.ttf", 10);
	this->_color = {255, 255, 255};
}

GuiLetters::~GuiLetters(void) {
	TTF_CloseFont(this->_font);
	TTF_Quit();
}

GuiLetters & GuiLetters::operator=(GuiLetters const & rhs) {
	return (rhs);
}

GuiLetters::GuiLetters(GuiLetters const & guiL) {
	*this = guiL;
}

void Writetext(int x, int y, std::string text, SDL_Renderer *render) {
	this->_surface = SDL_RenderTextSolid(this->_font, text, this->color);
	this->_texture = SDL_CreateTextureFromSurface(render, this->_surface);
}

void QuitLetter(void) {
	SDL_DestroyTexture(this->_texture);
	SDL_DestroySurface(this->_surface);
}
