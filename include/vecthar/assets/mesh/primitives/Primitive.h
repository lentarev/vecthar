//
// Created by Egor Lentarev on 09.01.2026.
//

#ifndef EOCC_PRIMITIVE_H
#define EOCC_PRIMITIVE_H

#include <vecthar/assets/mesh/structures/MeshData.h>

namespace vecthar {

class Primitive {
public:
    Primitive();

    static MeshData createCube();
};

}  // namespace vecthar

#endif  // EOCC_PRIMITIVE_H