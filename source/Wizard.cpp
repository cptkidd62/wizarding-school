#include "Wizard.hpp"

Wizard::Wizard()
{
}

Wizard::~Wizard()
{
}

void Wizard::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(shape, states);
}