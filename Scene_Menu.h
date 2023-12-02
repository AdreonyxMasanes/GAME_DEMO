#include "Scene.h"
class Scene_Menu : Scene
{
    void moveSelector();
    void sDoAction();
    void sRender();
    void init();
    void registerAction(int key, const std::string action);

    public:
    Scene_Menu(GameEngine * gameEngine);
    void update();

};