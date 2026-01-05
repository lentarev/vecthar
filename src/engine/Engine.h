//
// Created by Egor Lentarev on 03.01.2026.
//

#ifndef EOCC_ENGINE_H
#define EOCC_ENGINE_H

#include <memory>

// Предварительное объявление классов
class Window;
class Shader;
class Renderer;

class Engine {
public:
    Engine();
    ~Engine();

    // Запуск главного цикла
    void run();

private:
    // Объявляем подсистемы движка

    // 1. Оконная подсистема
    std::unique_ptr<Window> _window;

    // 2. Подиситема Shader
    std::unique_ptr<Shader> _shader;

    // 3. Подиситема Renderer
    std::unique_ptr<Renderer> _renderer;
};

#endif  // EOCC_ENGINE_H