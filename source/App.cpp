#include "App.hpp"
#include "Button.hpp"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Window/VideoMode.hpp>

App::App()
{
    window.create(sf::VideoMode(800, 600), "Wizarding School");
    app_state = MENU;
}

App::~App()
{
}

void App::run()
{
    switch (app_state)
    {
    case MENU:
        runMenu();
        break;
    case GAME:
        runGame();
        break;
    case END:
        return;
    }
}

void App::runMenu()
{
    sf::Text title;
    sf::Font font;
    font.loadFromFile("resources/fonts/RubikDirt-Regular.ttf");
    title.setString("Wizarding School");
    title.setFont(font);
    title.setFillColor(sf::Color::Yellow);
    title.setCharacterSize(40);
    title.setPosition(40, 140);
    Button samplebutton(100, 250, 200, 100, "Play Game", false, 40);

    while (app_state == MENU)
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
                app_state = END;
                return;
            }
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Key::G)
            {
                app_state = GAME;
                return;
            }
        }

        window.clear();
        window.draw(title);
        window.draw(samplebutton);
        window.display();
    }
}

void App::runGame()
{
    Game newgame;
    newgame.run(window);
    app_state = MENU;
}