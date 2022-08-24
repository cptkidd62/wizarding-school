#ifndef APP_HPP
#define APP_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Window/Window.hpp>

class App
{
  public:
    App();
    ~App();

    void run();

  private:
    sf::RenderWindow window;
};

#endif