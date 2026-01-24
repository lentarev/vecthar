//
// Created by Egor Lentarev on 07.01.2026.
//

#ifndef VECTHAR_TEXT_RENDERER_H
#define VECTHAR_TEXT_RENDERER_H

#include <glm/gtc/matrix_transform.hpp>
#include <string>

namespace vecthar::ui {

class TextRenderer {
public:
    void drawText(const std::string& text, float x, float y, const glm::vec3& color);
};

}  // namespace vecthar::ui

#endif  // VECTHAR_TEXT_RENDERER_H