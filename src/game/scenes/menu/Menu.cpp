#include "Menu.h"
#include <glad/glad.h>
#include <engine/assets/mesh/structures/MeshData.h>
#include <engine/assets/mesh/primitives/Primitive.h>

Menu::Menu() {
    MeshData cubeData = Primitive::createCube();
    _cubeMesh = std::make_unique<Mesh>(cubeData);

    // 1
    // _cubeMesh = std::make_unique<CubeMesh>();
    // _cubeMaterial = std::make_unique<GoldMaterial>();
    // _transform1 = std::make_unique<Transform>();

    // 2
    // _cubeMesh2 = std::make_unique<CubeMesh>();
    // _cubeMaterial2 = std::make_unique<GoldMaterial>();
    // _transform2 = std::make_unique<Transform>();
    // _cubeBuffer = new CubeBuffer();
}

Menu::~Menu() {}

/**
 * Update - обновление логики
 */
void Menu::update(float deltaTime) {
    // Пока пустой
}

void Menu::draw(Renderer& renderer) {
    // Рисуем куб через рендерер
    // renderer.drawMesh(_cubeMesh, _redMaterial, _transform1);

    // Даже как то так
    // renderer.drawMesh(_cubeMesh2, _cubeMaterial2, _transform2);
}