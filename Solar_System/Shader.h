#ifndef SHADER_H
#define SHADER_H

// GL includes
#include "GL/glew.h"

class Shader
{
	GLuint shaderID;
	GLenum shaderType;
	bool isLoaded = false;

public:
	void loadShaderFromFile(const GLchar* shaderPath, GLenum shaderType);

	void deleteShader();

	// Getters
	bool isShaderLoaded()  const { return isLoaded; };
	GLuint getShaderID()   const { return shaderID; };
	GLenum getShaderType() const { return shaderType; };
};

#endif