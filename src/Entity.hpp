#ifndef VICTORYBATTLE_ENTITY_HPP
#define VICTORYBATTLE_ENTITY_HPP


#include "Image.hpp"
#include "Battle.hpp"

typedef long long EntityID;

enum Direction = { N, NE, E, SE, S, SW, W, NW, NONE };
enum EntityStateEnum = { Moving, Standing };

union StateData {
	Direction dir;
};

struct EntityState {
	EntityStateEnum action;
	StateData options;
	int animCounter;
};

class Position {
	public:
	Position(int xpos, int ypos);
	void translate(int dx, int dy);
	int x;
	int y;
}

struct Weapon {
	
};

class BoundingBox {
	public:
	BoundingBox(int width, int height);
	bool collides(BoundingBox b);
	int w;
	int h;
}

class EntityType {
	public:
	EntityType();
	EntityType(Image* image, BoundingBox* boundbox, Weapon* weapon);
	
	Image getImage(EntityState state);
	BoundingBox getBBox();
	
	private:
	Image* img;
	BoundingBox* bbox;
	Weapon* arm;
	
	/* In case anybody wonders about this eerie concept: this means that Battle can access private contents of EntityType. 
	   Similar line to be found at end of Entity class declaration. */
	friend class Battle;
};

/* Entity is anything that is not ground: bullets, walls, aliens, units. */
class Entity {
	public:
	Entity();
	Entity(Controller* cntrl, EntityType* enttype);
	
	bool isImmortal();
	int getHP();
	EntityID getID();
	
	private:
	EntityController* controller;
	EntityType* entityType;
	EntityID id;
	bool immortal;
	int currentHP;
	int animCounter;
	
	static EntityID nextID = 0;
	
	friend class Battle;
};

#endif
