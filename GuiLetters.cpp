#include <GuiLetters.hpp>

GuiLetters::GuiLetters(void) {
	TTF_Init();
	this->_font = TTF_OpenFont("./fonts/Roboto-Black.ttf", 10);
	this->_color.r = 255;
	this->_color.g = 255;
	this->_color.b = 255;
}

GuiLetters::~GuiLetters(void) {
	TTF_CloseFont(this->_font);
	TTF_Quit();
}

GuiLetters & GuiLetters::operator=(GuiLetters & rhs) {
	return (rhs);
}

GuiLetters::GuiLetters(GuiLetters const & guiL) {
	this->_font = guiL._font;
}

void GuiLetters::Writetext(int x, int y, std::string text, SDL_Renderer *render) {
	this->_surface = TTF_RenderText_Solid(this->_font, text.c_str(), this->_color);
	this->_texture = SDL_CreateTextureFromSurface(render, this->_surface);
	this->_rect.x = x;
	this->_rect.y = y;
	this->_rect.w = 70;
	this->_rect.h = 40;
	SDL_RenderCopy(render, this->_texture, NULL, &this->_rect);
}

void GuiLetters::QuitLetter(void) {
	SDL_DestroyTexture(this->_texture);
	SDL_FreeSurface(this->_surface);
}