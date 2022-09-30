#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <SFML/Graphics/Drawable.hpp>

class Entity : public sf::Drawable
{
  public:
    Entity();
    ~Entity();

  private:
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};

#endif