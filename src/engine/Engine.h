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

    // Инициализация всех систем движка
    void init();

    // Запуск главного цикла
    void run();

    // Освобождение всех использованных ресурсов движка
    void cleanUp();

private:
    // Объявляем подсистемы движка

    // 1. Оконная подсистема
    std::unique_ptr<Window> _window;
};

#endif  // EOCC_ENGINE_H