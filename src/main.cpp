#include "Battle.hpp"
#include "Game.hpp"

void main(int argc, char** argv) {
	/* TODO: Parsing and options */
	Battle battle;
	battle.initBattle();
	Game game;
	game.setBattle();
	while(!game.isFinished()) {
		game.limitFPS();
		game.step();
	}
	
	return 0;
};