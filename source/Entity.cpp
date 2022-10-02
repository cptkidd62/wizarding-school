#include "Entity.hpp"
#include <SFML/Graphics/Color.hpp>

Entity::Entity()
{
    pos = {50, 50};
    shape.setPosition(pos);
    shape.setSize({50, 50});
    shape.setFillColor(sf::Color::Magenta);
}

Entity::~Entity()
{
}

void Entity::move(sf::Vector2f vec, float mult)
{
    pos += vec * mult;
}

void Entity::update()
{
    shape.setPosition(pos);
}

void Entity::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(shape, states);
}