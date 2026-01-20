#include <memory>
#include <vecthar/Engine.h>
#include <vecthar/base/logger/Logger.h>

// Scenes
#include "scenes/menu/Menu.h"
#include "scenes/level1/Level1.h"

int main() {
    try {
        const auto engine = std::make_unique<vecthar::Engine>();
        engine->setCurrentScene(std::make_unique<Menu>());
        engine->run();

    } catch (const std::exception& e) {
        vecthar::Logger::log(1, "Fatal error: %s\n", e.what());
        return -1;
    }

    return 0;
}