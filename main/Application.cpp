//
// Created by patrik on 01.09.17..
//

#include <SFML/System/Clock.hpp>
#include <iostream>
#include "Application.h"
#include "Display.h"

void calculateFPS(bool _print_fps) {
    static sf::Clock timer;
    static sf::Clock printTimer;
    static auto numFrames = 0;

    numFrames++;

    if (printTimer.getElapsedTime().asSeconds() >= 1.0f)
    {
        auto fps = (float)numFrames / timer.getElapsedTime().asSeconds();
        printTimer.restart();
        if (_print_fps) {
            std::cout << "fps : " << fps << std::endl;
        }

        numFrames = 0;
        timer.restart();
    }
}

void input() {

}

void update(float _dt) {

}

void draw() {

}

Application::Application() {
    Display::init();
}

Application::~Application() {
}

void Application::runMainLoop() {
    sf::Clock clock;
    sf::Time accumulator;
    sf::Time dt = sf::seconds(1.f / Display::UPS);
    sf::Time max_acc = sf::seconds(0.2f);

    while(Display::isOpen()) {
        Display::checkWindowEvents();
        Display::clear();

        input();

        // Physics
        accumulator += clock.restart();

        // Clamp accumulator
        //if (accumulator > max_acc) {
        //    accumulator = max_acc;
        //}

        while (accumulator > dt) {
            update(dt.asSeconds());
            accumulator -= dt;
        }

        // Rendering
        draw();

        calculateFPS(true);
        Display::display();
    }
}