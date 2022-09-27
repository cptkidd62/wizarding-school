#include "Game.hpp"
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>

Game::Game()
{
    game_state = RUNNING;
}

Game::~Game()
{
    // window = nullptr;
    // delete window;
}

void Game::run(sf::RenderWindow &window)
{
    sf::Text title;
    sf::Font font;
    font.loadFromFile("resources/fonts/RubikDirt-Regular.ttf");
    title.setString("PlAyInG");
    title.setFont(font);
    title.setFillColor(sf::Color::Yellow);
    title.setCharacterSize(40);
    title.setPosition(40, 140);

    while (game_state != END)
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Key::Escape)
            {
                game_state = END;
                return;
            }
        }

        window.clear();
        window.draw(title);
        window.display();
    }
}