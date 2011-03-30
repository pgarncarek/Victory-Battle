#ifndef VICTORYBATTLE_IMAGE_HPP
#define VICTORYBATTLE_IMAGE_HPP

#include <string>
#include <map>

/* An opaque box, we don't want anyone screwing and modifying images */
class Image {
	public:
	Image();
	~Image();
	
	private:
	/* SDL */
};

/* Loading of image be done here */
class ImageCache {
	public
	ImageCache();
	
	Image* fetch(std::string name);
	private:
	std::map<std::string, Image*> images;
};

#endif