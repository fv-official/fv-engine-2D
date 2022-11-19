#include "settings.h"

class HOT_KEYS{

public:

window_settings ws;

void keys(){


    if(event.type == sf::Event::KeyPressed)
    {
        if(event.key.code == sf::Keyboard::Key::Escape)
            ws.window.close();
        // ... etc ...
        }
    }
};
