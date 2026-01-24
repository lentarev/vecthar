#include <vecthar/assets/mesh/primitives/square/SquareGeometry.h>

namespace vecthar {

std::vector<float> _vertices = {
    -0.5f, -0.5f, 0.0f,  // 0: bottom left
    0.5f,  -0.5f, 0.0f,  // 1: bottom right
    0.5f,  0.5f,  0.0f,  // 2: top right
    -0.5f, 0.5f,  0.0f   // 3: top left
};

std::vector<unsigned int> _indices = {
    0, 1, 3,  // first triangle: BL, BR, TL
    1, 2, 3   // second triangle: BR, TR, TL
};

std::vector<float> _texCoords = {};

}  // namespace vecthar