//
// Created by Egor Lentarev on 02.01.2026.
//

#include "Window.h"
#include <stdexcept>

/**
 * Constructor
 */
Window::Window(const int width, const int height, const char* title) {
    int actualScreenWidth;
    int actualScreenHeight;

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    mWindow = glfwCreateWindow(width, height, title, nullptr, nullptr);

    if (!mWindow) {
        throw std::runtime_error("Failed to create GLFW window");
    }

    // glfwDestroyWindow(mWindow);  // ← сначала уберём окно (чтобы не утекало)
    // throw std::runtime_error("Тест: имитация ошибки в конструкторе Window");

    glfwGetFramebufferSize(mWindow, &actualScreenWidth, &actualScreenHeight);
    glfwMakeContextCurrent(mWindow);

    // 2. Инициализация GLAD
    if (!gladLoadGLLoader(reinterpret_cast<GLADloadproc>(glfwGetProcAddress))) {
        glfwDestroyWindow(mWindow);  // убираем часть ресурса
        throw std::runtime_error("Failed to initialize GLAD");
    }

    // Set viewport size
    glViewport(0, 0, actualScreenWidth, actualScreenHeight);

    Logger::log(1, "%s: Window successfully initialized\n", __FUNCTION__);
}

/**
 * Desctructor
 */
Window::~Window() {
    Logger::log(1, "%s: Terminating Window\n", __FUNCTION__);
    glfwDestroyWindow(mWindow);
}

/**
 * Main Loop
 */
void Window::loop() const {
    // VSYNC
    glfwSwapInterval(1);

    while (!glfwWindowShouldClose(mWindow)) {
        glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // swap buffers
        glfwSwapBuffers(mWindow);

        // poll events in a loop
        glfwPollEvents();
    }
}
