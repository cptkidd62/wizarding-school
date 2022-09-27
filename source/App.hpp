#ifndef APP_HPP
#define APP_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Window/Window.hpp>
#include "Button.hpp"
#include "Game.hpp"

class App
{
  public:
    App();
    ~App();

    void run();

  private:
    sf::RenderWindow window;
    enum {MENU, GAME, END} app_state;

    void runMenu();
    void runGame();
};

#endif