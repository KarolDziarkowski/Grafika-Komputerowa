#ifndef SHADER_PROGRAM_H
#define SHADER_PROGRAM_H

// Other includes
#include "Shader.h"

class ShaderProgram
{
	GLuint shaderProgramID;
	bool isLinked = false;
public:
	void createProgram();

	bool addShaderToProgram(const Shader& shader);

	bool linkProgram();

	void useProgram() const;

	void deleteProgram();

	// Getters
	GLuint getShaderProgramID() const;
};

#endif
