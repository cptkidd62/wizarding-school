#ifndef WIZARD_HPP
#define WIZARD_HPP

#include "Entity.hpp"

class Wizard : public Entity
{
  public:
    Wizard();
    ~Wizard();

  protected:
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};

#endif