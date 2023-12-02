#pragma once
#include "EntityManager.h"
class GameEngine;

class Scene
{
    GameEngine* m_game = nullptr;
    EntityManager m_entities;
    int currentFrame = 0;
    std::map<int, std::string> actionMap;
    bool m_paused = false;
    bool m_hasEnded = false;

    public:
    Scene();
    virtual void update() = 0;
    //TODO: Action object as a parameter 
    virtual void sDoAction() = 0;
    virtual void sRender() = 0;

    void simulate(int simulationTimes);
    //TODO: Action object as a parameter 
    void soAction();
    //TODO: Action object as a parameter 
    void registerAction();

};

