#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderTexture.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include "Player.hpp"

class Game
{
  public:
    Game();
    ~Game();

    void run(sf::RenderWindow &window);

  private:
    enum {RUNNING, PAUSE, END} game_state;
};

#endif