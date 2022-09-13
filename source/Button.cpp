#include "Button.hpp"
#include <SFML/Graphics/Color.hpp>
#include <SFML/System/Vector2.hpp>

Button::Button()
{
    box.setPosition(50, 50);
    box.setSize(sf::Vector2f(100, 50));
    box.setFillColor(sf::Color::Red);
    font.loadFromFile("resources/fonts/RubikDirt-Regular.ttf");
    text.setFont(font);
    text.setString("Button");
    text.setCharacterSize(30);
    text.setPosition(60, 60);
    text.setFillColor(sf::Color::White);
}

Button::~Button()
{
}

void Button::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(box, states);
    target.draw(text, states);
}