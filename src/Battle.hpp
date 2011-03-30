#ifndef VICTORYBATTLE_BATTLE_HPP
#define VICTORYBATTLE_BATTLE_HPP

#include <map>

#include "Entity.hpp"
#include "EntityController.hpp"

class Battle {
	public:
	Battle();
	void initStandardBattle(/* Options */);
	
	void worldStep(); /* Gets orders, executes. */
	private:
	std::map<EntityID, Entity> entities;
};

#endif