#include "motion.hpp"

Motion::Motion() {}

sf::Vector2f Motion::parametric(sf::Vector2f &playerPos, float scalar, sf::Vector2f &vector) {
    float newX = playerPos.x + scalar * vector.x;
    float newY = playerPos.y  + scalar * vector.y;

    sf::Vector2f newPos(newX, newY);

    return newPos;
}

void Motion::orbit(sf::Vector2f &playerPos) {

}

void Motion::translate(sf::Vector2f &playerPos) {

}

void Motion::rotate(sf::Vector2f &playerPos) {

}     