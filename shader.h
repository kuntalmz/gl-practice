#pragma once

#include <string>
#include <GL/glew.h>
#include <iostream>
#include <fstream>

class Shader{

public:
    
    Shader(const std::string &path);
    ~Shader();

    void Bind();

    static GLuint _program;

private:
    GLuint _shaders[2];

    static void CheckShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string& errorMessage);
    static std::string LoadShader(const std::string& fileName);
    static GLuint CreateShader(const std::string &text, GLenum shaderType);
};