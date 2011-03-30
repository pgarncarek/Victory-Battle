#ifndef VICTORYBATTLE_ENTITYCONTROLLER_HPP
#define VICTORYBATTLE_ENTITYCONTROLLER_HPP

#include "Input.hpp"
#include "Entity.hpp"

struct Order {
	Direction move;
	bool fire;
};

class EntityController {
	public:
	EntityController();
	virtual Order ponder(Entity* unit);
};

/* Does NOTHING, sits in place and drools */
class DummyController : publicController {
	public:
	DummyController();
	virtual Order ponder(Entity* unit);
};

class AIController : publicController {
	public:
	AIController();
	virtual Order ponder(Entity* unit);
};

class HumanController : publicController {
	public:
	HumanController();
	virtual Order ponder(Entity* unit);
};

#endif