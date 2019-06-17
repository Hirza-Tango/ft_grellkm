#ifndef GUI_H
#define GUI_H

#include <GuiLetters.hpp>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

class Gui {
	private:
	GuiLetters *_letters;
	SDL_Window *_window;
	SDL_Event _event;
	SDL_Texture *_texture;
	SDL_Renderer *_renderer;
	Uint32 *_pixels;
	unsigned int _moduleIndex;
	SDL_Rect _rect;
	public:
	void prepDraw(void);
	void Draw(unsigned int const x, unsigned int const y, Uint32 color);
	void DrawModuleBox(void);
	void quitExec(void);
	static bool quit;
	Gui(void);
	Gui(Gui const & gui);
	~Gui(void);
	Gui const & operator=(Gui const & rhs);
	void run(void);
};

#endif
