# Vecthar engine

📚 **Documentation**: [English](https://lentarev.github.io/vecthar/en/) | [Русский](https://lentarev.github.io/vecthar/ru/)

A minimal, educational C++/OpenGL game engine built from scratch.  
Designed for learning graphics programming, engine architecture, and real-time simulation.

## 🚀 Features

- **Scene management** – switch between scenes (e.g., Menu → Level)
- **Mesh & Material system** – data-driven rendering with PBR-ready structure
- **Fixed timestep game loop** – deterministic physics and animations
- **Camera with perspective projection** – proper 3D view and aspect ratio handling
- **GLFW + GLAD backend** – cross-platform windowing and OpenGL context
- **Modern C++** – RAII, smart pointers, no raw `new`/`delete`

## 📂 Project Structure

The engine is structured as a header-only compatible C++ library with a clear separation between the core engine and the demo application:

```text
vecthar/
├── demo/                 # Demo application (game example)
│   ├── main.cpp          # Entry point
│   ├── scenes/           # Game-specific scenes (Menu, Level1, etc.)
│   └── shaders/          # GLSL shaders for the demo
│
├── include/vecthar/      # Public API headers (installable)
│   ├── Engine.h
│   ├── base/
│   ├── camera/
│   ├── renderer/
│   ├── scene/
│   └── system/
│
└── src/vecthar/          # Engine implementation
    ├── Engine.cpp
    ├── base/
    ├── camera/
    ├── renderer/
    └── system/
```

## 🛠️ Build

Prerequisites:
- CMake ≥ 3.28
- Ninja (recommended)
- C++20 compiler (GCC 10+, Clang 12+)
- OpenGL development headers

On Ubuntu 24.04:
```bash
sudo apt install cmake ninja-build libgl1-mesa-dev xorg-dev
```

```bash
git clone https://github.com/lentarev/vecthar.git
cd vecthar
cmake -B build -G Ninja
cmake --build build
./build/vecthar_demo
```

## 📜 License

Copyright (c) 2026 Egor Lentarev.  
Released under the [MIT License](LICENSE).