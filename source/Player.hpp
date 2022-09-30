#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Wizard.hpp"

class Player : public Wizard
{
  public:
    Player();
    ~Player();

  private:
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};

#endif