#include "Game.h"
#include <iostream>

Game::Game(const char* windowName, int windowW, int windowH, bool fullscreen) {
	init(windowName, windowW, windowH, fullscreen);
	running = true;
}

void Game::init(const char* windowName, int windowW, int windowH, bool fullscreen) {
	std::cout << "Hello World!" << std::endl;

	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_DisplayMode dm;
	
	if (fullscreen) {
		SDL_GetDesktopDisplayMode(0, &dm);
		windowW = dm.w;
		windowH = dm.h;
	}
	window = SDL_CreateWindow(windowName, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, windowW, windowH, NULL);
	SDL_SetWindowResizable(window, SDL_TRUE);

	if (window) { std::cout << "Window Created!\n"; }

	renderer = SDL_CreateRenderer(window, -1, 0);
	if (renderer) { std::cout << "Renderer Created!\n"; }
}

void Game::update() {
	handleEvents();

	render();
}

void Game::render() {
	SDL_RenderClear(renderer);

	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0.1);

	SDL_RenderPresent(renderer);
}

void Game::handleEvents() {
	SDL_PollEvent(&event);

	if (event.type == SDL_QUIT)
		running = false;

	else if (event.type == SDL_KEYDOWN)
		if (event.key.keysym.sym == SDLK_ESCAPE)
			running = false;
}

bool Game::isRunning() {
	return running;
}

Game::~Game() {
	clean();
}

void Game::clean() {
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	std::cout << "Game cleaned!\n";
}
