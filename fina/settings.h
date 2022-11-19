#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class window_settings {

public:

    int WIDTH;
    int HEIGHT;
    int WINDOW_TYPE;
    int Vsynce;
    int FPS;

    sf::RenderWindow window;

    void window_size() {

    std::cout << "WIDTH:";

    std::cin >> WIDTH;

    std::cout << "HIEGHT:";

    std::cin >> HEIGHT;

}

    void w_type() {

    std::cout << "Fullscreen[1], Window[2], FullsizeWindow[3]:";

    std::cin >> WINDOW_TYPE;

    if (WINDOW_TYPE == 1){
        window.create(sf::VideoMode(WIDTH, HEIGHT), "fina", sf::Style::Fullscreen);
        std::cout << "Ready";
    }

    if (WINDOW_TYPE == 2){
        window.create(sf::VideoMode(WIDTH, HEIGHT), "fina", sf::Style::Default);
        std::cout << "Ready";
    }

    if (WINDOW_TYPE == 3){
        window.create(sf::VideoMode(WIDTH, HEIGHT), "fina", sf::Style::None);
        std::cout << "Ready";
    }

}

    void vsynce() {

    std::cout << "Vsynce[1], [0]:";

    std::cin >> Vsynce;

    if (Vsynce == 1) {
        window.setVerticalSyncEnabled(true);
    }

    else if (Vsynce == 0) {
        window.setVerticalSyncEnabled(false);
    }

}

    void framerate() {

    std::cout << "FPS:";

    std::cin >> FPS;

    window.setFramerateLimit(FPS);

    }

// Mods:
    void window_type() {
    window_size();
    vsynce();
    framerate();
    w_type();
    }
};
