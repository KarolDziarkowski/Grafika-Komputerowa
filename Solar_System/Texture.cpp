// stb_image
#include "stb/stb_image.h"

// Other includes
#include "Texture.h"

// Std. Includes
#include <iostream>

void Texture::setTextureWrappingParam(GLenum S, GLenum T)
{
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, S);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, T);
}

void Texture::setTextureFilteringParam(GLenum Min, GLenum Mag)
{
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, Min);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, Mag);
}

void Texture::loadTexture()
{
	int width, height, numChannels;
	unsigned char* image = stbi_load(imgPath.c_str(), &width, &height, &numChannels, 0);
	if (!image)
	{
		std::cerr << "Failed to load texture: " << imgPath << std::endl;
		return;
	}

	GLenum format;
	if (numChannels == 1)
		format = GL_RED;
	else if (numChannels == 3)
		format = GL_RGB;
	else if (numChannels == 4)
		format = GL_RGBA;
	else
	{
		std::cerr << "Unsupported number of channels: " << numChannels << std::endl;
		stbi_image_free(image);
		return;
	}

	glTexImage2D(GL_TEXTURE_2D, 0, format, width, height, 0, format, GL_UNSIGNED_BYTE, image);
	glGenerateMipmap(GL_TEXTURE_2D);
	stbi_image_free(image);

	isLoaded = true;
}

void Texture::fastLoad()
{
	glGenTextures(1, &textureID);

	glBindTexture(GL_TEXTURE_2D, textureID);
	setTextureWrappingParam();
	setTextureFilteringParam();
	loadTexture();
	glBindTexture(GL_TEXTURE_2D, 0);
}

void Texture::useTexture()
{
	if (!isLoaded)
	{
		std::cerr << "ERROR::TEXTURE::This texture isn't loaded!" << std::endl;
		return;
	}

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, textureID);
}

void Texture::clearTexture()
{
	glDeleteTextures(1, &textureID);
	textureID = 0;
	isLoaded = false;
	imgPath = "";
}

Texture::~Texture()
{
	clearTexture();
}
