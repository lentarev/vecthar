//
// Created by Egor Lentarev on 09.01.2026.
//

#ifndef EOCC_CUBE_GEOMETRY_H
#define EOCC_CUBE_GEOMETRY_H

#include <glad/glad.h>
#include <vector>

class CubeGeometry {
private:
    CubeGeometry() = delete;  //  Disable creation of instances.

    static std::vector<float> _vertices;
    static std::vector<unsigned int> _indices;
    static std::vector<float> _texCoords;
    static std::vector<float> _normals;

public:
    // Vertex
    static const std::vector<float>& getVertices();
    static size_t getVertexFloatCount();
    static size_t getVertexByteSize();

    // Indices
    static const std::vector<unsigned int>& getIndices();
    static GLsizei getIndexCount();
    static size_t getIndexByteSize();

    // Texture coordinates
    static const std::vector<float>& getTexCoords();
    static size_t getTexCoordCount();
    static size_t getTexCoordByteSize();

    // Normals
    static const std::vector<float>& getNormals();
    static size_t getNormalCount();
    static size_t getNormalByteSize();
};

#endif  // EOCC_CUBE_GEOMETRY_H