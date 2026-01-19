//
// Created by Egor Lentarev on 06.01.2026.
//

#ifndef EOCC_MENU_H
#define EOCC_MENU_H

#include <memory>
#include <string>

#include <vecthar/scene/base/SceneBase.h>
#include <vecthar/assets/material/Material.h>
#include <vecthar/base/structures/Transform.h>

// Forward declaration of classes
namespace vecthar {

class Mesh;
class Renderer;
class Shader;

}  // namespace vecthar

class Menu : public vecthar::SceneBase {
public:
    Menu();
    ~Menu();

    void update(float deltaTime, float totalTime) override;
    void draw(vecthar::Renderer& renderer) override;
    void onKey(int key, int scancode, int action, int mods) override;

private:
    std::unique_ptr<vecthar::Mesh> _cubeMesh;
    std::unique_ptr<vecthar::Shader> _shader;
    vecthar::Material _cubeMaterial;
    vecthar::Transform _transform;
};

#endif  // EOCC_MENU_H