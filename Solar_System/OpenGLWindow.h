#ifndef GLFW_Window_H
#define GLFW_Window_H

// GL Includes
#include <GL/glew.h>
#include <GLFW/glfw3.h>

// GLM Mathematics
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>



// Std. Includes
#include <string>

class OpenGLWindow
{
	GLFWwindow* window = nullptr;
	std::string windowTitle;

	// Window params
	int width = 800, height = 600;
	bool fullScreen = true;

	glm::mat4 projectionMatrix = glm::perspective(glm::radians(45.0f), float(width) / float(height), 0.5f, 1000.0f);
public:
	~OpenGLWindow();

	bool createWindow(int width, int height, std::string windowTitle, bool showfullScreen);

	void runApp();


	// Getters
	GLFWwindow* getWindow()         const { return window; };
	glm::mat4 getProjectionMatrix() const { return projectionMatrix; };

	// Setters
	void setProjectionMatrix(glm::mat4 proj) { projectionMatrix = proj; };

private:

	void initializeScene();

	void doMovement();

	void renderScene();

	void showFPS();

	static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode);

	static void mouse_callback(GLFWwindow* window, double xpos, double ypos);

	static void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);

	void onWindowSizeChanged();
};

#endif