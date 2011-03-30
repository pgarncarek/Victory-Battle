#ifndef VICTORYBATTLE_INPUT_HPP
#define VICTORYBATTLE_INPUT_HPP

#include <set>

typedef int /* PLACEHOLDER */ Key;

enum InputAction = { KeyDown, KeyRight, KeyUp, KeyLeft, Shoot, Additional };

class Keyboard {
	public:
	Keyboard();
	void update(/* SDL */);
	bool isPressed(Key);
	
	private:
	/* SDL */
};

class KeyMap {
	public:
	KeyMap(/* Options */);
	std::set<InputAction> getActions();
	private:
	/* SDL */
};

#endif