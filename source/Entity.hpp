#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/System/Vector2.hpp>

class Entity : public sf::Drawable
{
  public:
    Entity();
    ~Entity();
    void move(sf::Vector2f vec, float mult);
    void update();

  protected:
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;

    sf::RectangleShape shape;
    sf::Vector2f pos;
};

#endif