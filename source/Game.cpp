#include "Game.hpp"
#include "Player.hpp"
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>

Game::Game()
{
    game_state = RUNNING;
}

Game::~Game()
{
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

    Player player;

    while (game_state != END)
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Key::Escape)
            {
                game_state = END;
                break;
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
        {
            player.move({0, -2}, 1);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
        {
            player.move({-2, 0}, 1);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
        {
            player.move({0, 2}, 1);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
        {
            player.move({2, 0}, 1);
        }

        player.update();

        window.clear();
        window.draw(title);
        window.draw(player);
        window.display();
    }
}