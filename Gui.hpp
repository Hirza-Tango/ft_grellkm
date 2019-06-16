#ifndef GUI_H
#define GUI_H

#include <SDL2/SDL.h>

class Gui {
	private:
	SDL_Window *_window;
	SDL_Event _event;
	public:
	static bool quit;
	Gui(void);
	Gui(Gui const & gui);
	~Gui(void);
	Gui const & operator=(Gui const & rhs);
	void run(void);
};

#endif
