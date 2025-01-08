#ifndef directionalLight_h
#define directionalLight_h

#include <glad/glad.h>
#include <glm/glm.hpp>
#include "shader.h"

class DirectionalLight {
public:
    glm::vec3 direction;

    glm::vec3 ambient;
    glm::vec3 diffuse;
    glm::vec3 specular;

    DirectionalLight(glm::vec3 dir, glm::vec3 amb, glm::vec3 diff, glm::vec3 spec)
    {
        direction = dir;
        ambient = amb;
        diffuse = diff;
        specular = spec;
    }

    void setUpLight(Shader& lightingShader)
    {
        lightingShader.use();
        lightingShader.setVec3("directionalLight.ambient", ambient * ambientOn * isOn);
        lightingShader.setVec3("directionalLight.diffuse", diffuse * diffuseOn * isOn);
        lightingShader.setVec3("directionalLight.specular", specular * specularOn * isOn);
        lightingShader.setVec3("directionalLight.direction", direction);
    }

    void turnOff()
    {
        isOn = 0.0;
    }
    void turnOn()
    {
        isOn = 1.0;
    }
    void turnAmbientOn()
    {
        ambientOn = 1.0;
    }
    void turnAmbientOff()
    {
        ambientOn = 0.0;
    }
    void turnDiffuseOn()
    {
        diffuseOn = 1.0;
    }
    void turnDiffuseOff()
    {
        diffuseOn = 0.0;
    }
    void turnSpecularOn()
    {
        specularOn = 1.0;
    }
    void turnSpecularOff()
    {
        specularOn = 0.0;
    }

private:
    float ambientOn = 1.0;
    float diffuseOn = 1.0;
    float specularOn = 1.0;
    float isOn = 0.0;
};

#endif /* directionalLight_h */