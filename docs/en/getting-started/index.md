[<= Back](../) 

# Getting Started

The **eocc** game engine is in an early stage of development, but from the very beginning it has been designed with a key principle in mind: **cross-platform support**.

Currently supported platforms:
- **Linux** (development is done on Ubuntu 24.04),
- **Windows**,
- **macOS** (tested on Intel-based devices; Apple Silicon (M1/M2/M3) support has not been verified yet).

This is made possible by using:
- **CMake** — for cross-platform builds,
- **GLFW** — for window creation and input handling,
- **OpenGL Core Profile** — for rendering (via the **GLAD** loader).

> The engine is written in **C++20** and contains no platform-specific code.

## Building

Make sure the following dependencies are installed:
- A C++20-compliant compiler (e.g., **Clang** or **GCC ≥ 10**),
- **CMake ≥ 3.28**,
- **Ninja** (recommended),
- OpenGL development headers (on Ubuntu: `libgl1-mesa-dev` and `xorg-dev`).

Then run:

```bash
cmake -B build -G Ninja
cmake --build build
./build/eocc_demo