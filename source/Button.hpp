#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Text.hpp>

class Button : public sf::Drawable
{
  public:
    Button();
    ~Button();

  protected:
    sf::RectangleShape box;
    sf::Text text;
    sf::Font font;

    enum {LEFT, CENTER, RIGHT} textposition;

  private:
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};

#endif