#include "Player.hpp"

Player::Player()
{
}

Player::~Player()
{
}

void Player::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(shape, states);
}