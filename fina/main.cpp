#include "settings.h"

int main()
{
// Settings mods:
    window_settings ws;
    ws.window_type();

while (ws.window.isOpen()){
        sf::Event event;
        while (ws.window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                ws.window.close();
        // Keys:
            if(event.type == sf::Event::KeyPressed){
                if(event.key.code == sf::Keyboard::Key::Escape)
                    ws.window.close();
        }
    }

        ws.window.clear();
        ws.window.display();
}

    return 0;
}
