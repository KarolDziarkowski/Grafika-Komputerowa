// GL Includes
#include <GL/glew.h>
#include <GLFW/glfw3.h>

// Other Includes
#include "OpenGLWindow.h"

#include <Windows.h>
#include <iostream>


int main(int argc, char* argv[])
{
	OpenGLWindow Window;

	Window.createWindow(1080, 720, "Solar System Simulator ", false);
	Window.runApp();

	return 0;
}

