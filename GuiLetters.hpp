#ifndef GUI_LETTERS_H
#define GUI_LETTERS_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <string>

class GuiLetters {
	public:
	GuiLetters(void);
	~GuiLetters(void);
	GuiLetters & operator = (GuiLetters & rhs);
	GuiLetters(GuiLetters const & guiL);
	void Writetext(int x, int y, std::string text, SDL_Renderer *renderer);
	void QuitLetter(void);
	private:
	SDL_Rect _rect;
	TTF_Font *_font;
	SDL_Color _color;
	SDL_Surface *_surface; //we'll print to this surface and use the renderer to print that surface to the screen
	SDL_Texture *_texture;
};

#endif
