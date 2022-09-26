#include "Button.hpp"
#include <SFML/Graphics/Color.hpp>
#include <SFML/System/Vector2.hpp>

Button::Button()
{
    Button(50, 50, 150, 50, "Button", false, 30);
}

Button::Button(int x, int y, int width, int height, std::string msg, bool swtch = false, int size = 30)
{
    box.setPosition(x, y);
    box.setSize(sf::Vector2f(width, height));
    box.setFillColor(sf::Color::Red);
    font.loadFromFile("resources/fonts/RubikDirt-Regular.ttf");
    text.setFont(font);
    text.setString(msg);
    text.setCharacterSize(size);
    if (text.getGlobalBounds().width + height - size > width)
    {
        box.setSize(sf::Vector2f(text.getGlobalBounds().width + height - size, height));
    }
    text.setPosition(box.getGlobalBounds().left + box.getGlobalBounds().width / 2. - text.getGlobalBounds().width / 2,
                     box.getGlobalBounds().top + (box.getGlobalBounds().height - size) / 2.);
    text.setFillColor(sf::Color::White);
    swtch_button = swtch;
}

Button::~Button()
{
}

void Button::update(const sf::Vector2f &mousePos)
{
    // window.mapPixelToCoords(sf::Mouse::getPosition(window));
}

bool Button::click_on()
{
    return (!clicked || swtch_button);
}

bool Button::is_active()
{
    return active;
}

bool Button::is_hovered()
{
    return hovered;
}

bool Button::is_clicked()
{
    return clicked;
}

void Button::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(box, states);
    target.draw(text, states);
}