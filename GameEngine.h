#pragma once
#include "Assets.h"
#include "Scene.h"
#include <map>

class GameEngine
{
    std::map<std::string, std::shared_ptr<Scene>> m_scenes;
    sf::RenderWindow m_window;
    Assets m_assets;
    std::string m_currentScene;
    bool m_running = true;

    void init(const std::string & assets);
    std::shared_ptr<Scene> currentScence();
    
    public:
    GameEngine(const std::string & assets);
    void update();
    void run();
    void quit();
    void sUserInput();
    void changeScene(const std::string sceneName, const std::shared_ptr<Scene> s);
    Assets & getAssets();
    sf::RenderWindow & getWindow();
};