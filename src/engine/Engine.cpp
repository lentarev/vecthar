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
    // Чтение шейдеров

    // Запускаем цикл оконной подсистемы
    _window->loop();
}
