#pragma once
#include "EntityManager.h"
#include "Action.h"
class GameEngine;

class Scene
{
    protected:
    GameEngine* m_game = nullptr;
    EntityManager m_entities;
    int currentFrame = 0;
    std::map<int, std::string> actionMap;
    bool m_paused = false;
    bool m_hasEnded = false;

    public:
    Scene();
    Scene(GameEngine * gameEngine);
    virtual void update() = 0;
    virtual void sDoAction(Action a) = 0;
    virtual void sRender() = 0;

    void simulate(int simulationTimes);
    void soAction(Action a);
    void registerAction(Action a);

};

