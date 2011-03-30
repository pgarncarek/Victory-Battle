#ifndef VICTORYBATTLE_SCREEN_HPP
#define VICTORYBATTLE_SCREEN_HPP

#include "Image.hpp"

class Screen {
	public:
	Screen(/* OPTIONS */);
	
	void put(Image* img, int x, int y);
	void flip(); /* Flip as in "flip buffer" */
	private:
	/* SDL */
};

#endif