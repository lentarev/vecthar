//
// Created by Egor Lentarev on 03.01.2026.
//

#include "Engine.h"
#include <engine/system/window/Window.h>
#include <engine/assets/shader/Shader.h>
#include <engine/renderer/Renderer.h>

/**
 * Constructor
 */
Engine::Engine() {
    // 1. Оконная подсистема
    _window = std::make_unique<Window>(800, 600, "OpenGL Test Window");

    // 2. Подиситема Shader
    _shader = std::make_unique<Shader>();

    // 3. Подиситема Renderer
    _renderer = std::make_unique<Renderer>();
}

/**
 * Destructor
 */
Engine::~Engine() {}

/**
 * Запуск главного цикла
 */
void Engine::run() {
    while (!glfwWindowShouldClose(_window->getGLFWWindow())) {
        glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // swap buffers
        glfwSwapBuffers(_window->getGLFWWindow());

        // poll events in a loop
        glfwPollEvents();
    }
}
