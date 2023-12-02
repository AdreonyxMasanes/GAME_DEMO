#include "Scene.h"

class Scene_Play : Scene
{
    std::string m_levelFilePath;
    std::shared_ptr<Entity> m_player;
    //TODO: Create Player Config Struct and store it here

    void init();
    void sAnimation();
    void sRender();
    void sCollisions();
    void sMovement();
    //TODO: ACTION PARAMETER
    void sDoAction();

    public:
    Scene_Play(std::string & level);
    void update();  
};