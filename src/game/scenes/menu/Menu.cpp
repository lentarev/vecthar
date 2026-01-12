#include "Menu.h"
#include <glad/glad.h>
#include <engine/assets/mesh/structures/MeshData.h>
#include <engine/assets/mesh/primitives/Primitive.h>

Menu::Menu() {
    MeshData cubeData = Primitive::createCube();

    // 1
    _cubeMesh = std::make_unique<Mesh>(cubeData);
    // _cubeMaterial = std::make_unique<GoldMaterial>();
    // _transform1 = std::make_unique<Transform>();
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
}