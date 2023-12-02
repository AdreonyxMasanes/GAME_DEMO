#include "GameEngine.h"
#include <iostream>
#include <fstream>

GameEngine::GameEngine(const std::string & assets)
{
    init(assets);
}

void GameEngine::init(const std::string & assets)
{
    std::ifstream fin(assets);
    std::string configType;
    while(fin >> configType)
    {
        if(configType == "Texture")
        {
            std::string name;
            std::string filepath;
            fin >> name >> filepath;
            m_assets.addTexture(name, filepath);
            std::cout << "Texture: " << name << " was loaded." << std::endl;
        }

        if(configType == "Animation")
        {
            std::string animationName;
            std::string textureName;
            int frameCount;
            int animationSpeed;

            fin >> animationName >> textureName >> frameCount >> animationSpeed;
            m_assets.addAnimation(animationName, m_assets.getTexture(textureName), frameCount, animationSpeed);
            std::cout << "Aniamtion: " << animationName << " was loaded." << std::endl;
        }
    }
}

void GameEngine::changeScene(const std::string sceneName, const std::shared_ptr<Scene> s)
{
    m_currentScene = sceneName;
    m_scenes[sceneName] = s;
}