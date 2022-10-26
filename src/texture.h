#ifndef __TEXTURE_H__
#define __TEXTURE_H__

#include "glad/glad.h"


class Texture
{
public:
	unsigned int ID;
	Texture(const char* imagePath, GLenum format, bool flip = false);
	~Texture();

	// activate the texture
	void use(GLenum texture) const;

};


#endif