//
// Created by Egor Lentarev on 03.01.2026.
//

#include "Renderer.h"
#include <engine/assets/shader/Shader.h>

Renderer::Renderer() {
    _shader = std::make_unique<Shader>();
}

Renderer::~Renderer() {}

/**
 * Renderer
 */
void Renderer::drawMesh(const Mesh& mesh, const Material& material, const glm::mat4& modelMatrix) {}
