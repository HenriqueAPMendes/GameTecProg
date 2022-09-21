#pragma once

#define SDL_MAIN_HANDLED
#include <SDL.h>

class Game {
public:
	Game(const char* windowName = "TecProg Game", int windowW = 1080, int windowH = 720, bool fullscreen = false);
	~Game();

	void update();
	void render();
	void handleEvents();
	bool isRunning();

	SDL_Renderer* renderer;
	SDL_Event event;

private:
	void init(const char* windowName, int windowW, int windowH, bool fullscreen);
	void clean();
	SDL_Rect windowDimensions;
	SDL_Window* window;
	bool running;

};