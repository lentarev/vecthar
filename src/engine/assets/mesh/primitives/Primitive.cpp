#include "Primitive.h"
#include <engine/assets/mesh/primitives/cube/CubeGeometry.h>

Primitive::Primitive() = default;

MeshData Primitive::createCube() {
    MeshData data;

    data.positions = CubeGeometry::getVertices();
    data.indices = CubeGeometry::getIndices();
    data.texCoords = CubeGeometry::getTexCoords();
    data.normals = CubeGeometry::getNormals();

    return data;
}