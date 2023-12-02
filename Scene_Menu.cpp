#include "Scene_Menu.h"

Scene_Menu::Scene_Menu(GameEngine * gameEngine)
:Scene(gameEngine) {};
 
void Scene_Menu::registerAction(int key, const std::string action)
{
    actionMap[key] = action;
}

void Scene_Menu::init()
{
    registerAction(sf::Keyboard::W, "UP");
    registerAction(sf::Keyboard::S, "DOWN");
    registerAction(sf::Keyboard::P, "PLAY");
    registerAction(sf::Keyboard::Q, "QUIT");
}