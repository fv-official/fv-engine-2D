#pragma once
#include <iostream>

class window_settings
{

public:

    int WIDTH;
    int HEIGHT;

    void window_size() {

    std::cout << "WIDTH:";

    std::cin >> WIDTH;

    std::cout << "HIEGHT:";

    std::cin >> HEIGHT;

}


};
