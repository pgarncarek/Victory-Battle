#ifndef VICTORYBATTLE_GAME_HPP
#define VICTORYBATTLE_GAME_HPP

#include "Screen.hpp"
#include "Image.hpp"

class Game {
	public:
	CompositionManager();
	void setBattle(battle);
	
	void step();
	void limitFPS();
	bool isFinished();
	
	private:
	void drawFrame();
	Screen screen;
	ImageCache imgCache;
};

#endif