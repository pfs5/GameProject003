//
// Created by patrik on 01.09.17..
//

#ifndef GAMEPROJECT003_UTIL_H
#define GAMEPROJECT003_UTIL_H

#include <string>
#include <iostream>
#include <SFML/Window.hpp>

namespace Util {
    inline void print(std::string _s) {
        std::cerr << "> s: " << _s << std::endl;
    }

    inline void print(sf::Vector2f _v) {
        std::cerr << "> v2f: " << _v.x << " " << _v.y << std::endl;
    }
}

#endif //GAMEPROJECT003_UTIL_H
