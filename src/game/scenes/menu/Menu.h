//
// Created by Egor Lentarev on 06.01.2026.
//

#ifndef EOCC_MENU_H
#define EOCC_MENU_H

#include <memory>
#include <engine/scene/base/SceneBase.h>
#include <engine/assets/mesh/Mesh.h>

class Menu : public SceneBase {
public:
    Menu();
    ~Menu();

    void update(float deltaTime) override;
    void draw(Renderer& renderer) override;

private:
    std::unique_ptr<Mesh> _cubeMesh;
};

#endif  // EOCC_MENU_H