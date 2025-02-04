#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <vector>
#include <iostream>

#include "player.hpp"
#include "view.hpp"

#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

class Controller {
    private:
        
        void registerUserInput(int choice);
        void init();
        void startClock();
        Player* player;
        View* view;
        sf::Clock clock_;
        float deltaTime_;
        int choice_;

    public:
        Controller();
        ~Controller();
        void loop();
        void update();
        void getUserInput();

};

#endif