#ifndef CAMERA_H
#define CAMERA_H

// GL Includes
#include <GL/glew.h>

// GLM Mathematics
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

// Std. Includes
#include <vector>


// Default camera values
const GLfloat YAW = -90.0f;
const GLfloat PITCH = 0.0f;
const GLfloat SPEED = 8.0f;
const GLfloat SENSITIVTY = 0.05f;
const GLfloat ZOOM = 45.0f;

enum Camera_Movement {
    FORWARD,
    BACKWARD,
    LEFT,
    RIGHT
};

class Camera
{
    // Camera Attributes
    glm::vec3 Position;
    glm::vec3 Front;
    glm::vec3 Up;
    glm::vec3 Right;
    glm::vec3 WorldUp;

    // Eular Angles
    GLfloat Yaw;
    GLfloat Pitch;

    // Camera options
    GLfloat MovementSpeed;
    GLfloat MouseSensitivity;
    GLfloat Zoom;

public:
    Camera(glm::vec3 position = glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3 up = glm::vec3(0.0f, 1.0f, 0.0f), GLfloat yaw = YAW, GLfloat pitch = PITCH);

    Camera(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat upX, GLfloat upY, GLfloat upZ, GLfloat yaw, GLfloat pitch);

    void processKeyboard(Camera_Movement direction, GLfloat deltaTime);

    void processMouseMovement(GLfloat xoffset, GLfloat yoffset, GLboolean constrainPitch = true);
 
    void processMouseScroll(GLfloat yoffset);

    // Getters
    GLfloat getZoom() const { return Zoom; }
    glm::mat4 getViewMatrix() const;

    // Setters
    void setPosition(glm::vec3 position);
private:
    void updateCameraVectors();
};

#endif 