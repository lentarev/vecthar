#include <memory>
#include <engine/Engine.h>
#include <engine/base/logger/Logger.h>

int main() {
    try {
        const auto engine = std::make_unique<Engine>();
        engine->init();
        engine->run();
        engine->cleanUp();

    } catch (const std::exception& e) {
        Logger::log(1, "Fatal error: %s\n", e.what());
        return -1;
    }

    return 0;
}