#pragma once
#include "GameEngine.h"
#include "Assets.h"
#include <map>

class GameEngine
{
    // std::map<std::string, Scene> m_scenes;
    sf::RenderWindow m_window;
    Assets m_assets;
    std::string m_currentScene;
    bool m_running = true;

    void init(const std::string & assets);
    // Scene * currentScence
    
    // void sMovement();
    // void sUserInput();
    // void sRender();
    // void sCollison();
    // void sLifespan();
    // void sAnimation();
    
    public:
    GameEngine(const std::string & assets);
    void update();
    void run();
    void quit();
    void sUserInput();
    //void changeScene(Scene newScene)
    Assets & getAssets();
    sf::RenderWindow & getWindow();
};