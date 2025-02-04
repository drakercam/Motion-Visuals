#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#ifndef MOTION_HPP
#define MOTION_HPP

class Motion {
    public:
        Motion();
        sf::Vector2f parametric(sf::Vector2f &playerPos, float scalar, sf::Vector2f &vector);
        void orbit(sf::Vector2f &playerPos);
        void translate(sf::Vector2f &playerPos);
        void rotate(sf::Vector2f &playerPos);      
};

#endif