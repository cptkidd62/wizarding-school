#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/System/Vector2.hpp>

class Button : public sf::Drawable
{
  public:
    Button();
    Button(int x, int y, int width, int height, std::string msg, bool swtch, int size);
    ~Button();

    void update(const sf::Vector2f &mousePos);
    bool click_on();

    bool is_hovered();
    bool is_active();
    bool is_clicked();

  protected:
    sf::RectangleShape box;
    sf::Text text;
    sf::Font font;

    bool active;
    bool hovered;
    bool clicked;
    bool swtch_button;

  private:
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};

#endif