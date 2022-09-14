#include "App.hpp"
#include "Button.hpp"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Window/VideoMode.hpp>

App::App()
{
    window.create(sf::VideoMode(800, 600), "Wizarding School");
}

App::~App()
{
}

void App::run()
{
    sf::Text title;
    sf::Font font;
    font.loadFromFile("resources/fonts/RubikDirt-Regular.ttf");
    title.setString("Wizarding School");
    title.setFont(font);
    title.setFillColor(sf::Color::Yellow);
    title.setCharacterSize(40);
    title.setPosition(40, 140);
    Button samplebutton(100, 250, 200, 100, "Play Game", 40);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(title);
        window.draw(samplebutton);
        window.display();
    }
}