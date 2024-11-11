#ifndef TEXTURE_H
#define TEXTURE_H

// GL includes
#include "GL/glew.h"

// Std. Includes
#include <string>
#include <map>
#include <memory>


class Texture
{
	GLuint textureID = 0;
	GLboolean isLoaded = false;
	std::string imgPath;
public:
	Texture(std::string path) : imgPath(path) {};
	~Texture();

	void setTextureWrappingParam(GLenum S = GL_REPEAT, GLenum T = GL_REPEAT);

	void setTextureFilteringParam(GLenum Min = GL_LINEAR_MIPMAP_LINEAR, GLenum Mag = GL_LINEAR);

	void loadTexture();

	void fastLoad();

	void useTexture();

	void clearTexture();

	// Getters
	GLuint getTextureID()       const { return textureID; };
	GLboolean isTextureLoaded() const { return isLoaded; };
	std::string getImgPath()    const { return imgPath; };

private:
};

#endif
