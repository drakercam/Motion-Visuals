#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "motion.hpp"
#include <iostream>

#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player {
    private:
        void defineSprite();
        sf::Vector2f position_;
        float angle_;
        float speed_;
        sf::CircleShape sprite_;
        sf::Vector2f velocity_;
        Motion* motion_;

    public:
        Player(float x, float y);
        ~Player();
        void draw(sf::RenderTarget &target);
        void update();
        void move(int &choice);

        // --- Necessary Getters/Setters for the motion object ---
        void setAngle(float angle) { angle_ = angle; }
        float getAngle() { return angle_; }

        void setSpeed(float speed) { speed_= speed; }
        float getSpeed() { return speed_; }

        void setPosition(sf::Vector2f position) { position_ = position; }
        sf::Vector2f getPosition() { return position_; }
};

#endif