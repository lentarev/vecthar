//
// Created by Egor Lentarev on 03.01.2026.
//

#ifndef EOCC_ENGINE_H
#define EOCC_ENGINE_H

#include <memory>

// Предварительное объявление классов
class Window;

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
};

#endif  // EOCC_ENGINE_H