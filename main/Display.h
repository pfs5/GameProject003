//
// Created by patrik on 01.09.17..
//

#ifndef GAMEPROJECT003_DISPLAY_H
#define GAMEPROJECT003_DISPLAY_H

#include <SFML/Graphics.hpp>

namespace Display {
    void init();

    void clear(const sf::Color& colour = {0, 0, 0});
    void display();
    void draw(const sf::Drawable& drawable);

    void checkWindowEvents();

    bool isOpen();

    sf::RenderWindow &getWindow();

    constexpr uint16_t HEIGHT = 720;
    constexpr uint16_t WIDTH = 1208;
    const std::string TITLE = "Window";

    const float UPS = 60;   // 60
}


#endif //GAMEPROJECT003_DISPLAY_H
