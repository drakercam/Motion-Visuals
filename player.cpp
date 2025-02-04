#include "player.hpp"

Player::Player(float x, float y) 
: position_(x, y),
  velocity_(0.0f, 0.0f) {

    sprite_.setRadius(30.0f);
    defineSprite();
}

Player::~Player() {
    delete motion_;
}

void Player::draw(sf::RenderTarget &target) {
    defineSprite();
    target.draw(sprite_);
}

void Player::defineSprite() {
    sprite_.setOrigin(sprite_.getRadius(), sprite_.getRadius());
    sprite_.setPosition(position_.x, position_.y);
    sprite_.setFillColor(sf::Color::White);
}

void Player::move(int &choice) {
    // this method will take into account a user choice to decide upon which motion to peform on the player
    switch (choice)
    {
    case 1:   {      // parametric
        sf::Vector2f moveVec;
        float scalar;
        std::cout << "Enter an x and y position for the vector which to move the player by: ";
        std::cin >> moveVec.x;
        std::cin >> moveVec.y;

        std::cout << "Enter a scalar value by which to scale the movement vector: ";
        std::cin >> scalar;

        sf::Vector2f newPos = motion_->parametric(position_, scalar, moveVec);
        setPosition(newPos);
        break;
    }

    case 2:    {     // orbit
        break;
    }

    case 3:    {     // translate
        break;
    }

    case 4:    {     // rotation
        break;
    }
    
    default:        // if user input was invalid
        std::cerr << "Invalid input choice. Make sure its between 1 to 4 (inclusive)" << std::endl;
        break;
    }
}

void Player::update() {
    // handle specific functionalities here
}