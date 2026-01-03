//
// Created by Egor Lentarev on 03.01.2026.
//

#include "Engine.h"
#include <engine/system/window/Window.h>

/**
 * Constructor
 */
Engine::Engine() {
    _window = std::make_unique<Window>();
}

Engine::~Engine() = default;

/**
 * Инициализация всех систем движка
 */
void Engine::init() {
    // Оконная подсистема
    if (!_window->init(640, 480, "OpenGL Test Window")) {
        // Выбрасываем исключение, на тот случай если оконная подсистема не смогла инициализироваться
        throw std::runtime_error("Failed to initialize window subsystem");
    }
}

/**
 * Запуск главного цикла
 */
void Engine::run() {
    // Запускаем цикл оконной подсистемы
    _window->loop();
}

/**
 * Освобождение всех использованных ресурсов движка
 */
void Engine::cleanUp() {
    _window->cleanUp();
}
