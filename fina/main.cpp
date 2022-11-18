#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "settings.h"

int main()
{
    window_settings ws;
    ws.window_size();


    sf::RenderWindow window(sf::VideoMode(ws.WIDTH, ws.HEIGHT), "fina");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }

    return 0;
}
