#include "view.hpp"

View::View(float x, float y) 
: window_(sf::VideoMode(x, y), "Motion") {
    setScreenSize();
    setWindowSize(x, y);
    setWindowPosition();
    window_.setPosition(windowPosition_);
}

void View::setScreenSize() {
    screenSize_ = getScreenResolution();
}

void View::setWindowSize(float x, float y) {
    windowSize_.x = x;
    windowSize_.y = y;
}

void View::setWindowPosition() {
    windowPosition_ = sf::Vector2i(
        static_cast<int>((screenSize_.x - windowSize_.x) / 2) + 400.0f,
        static_cast<int>((screenSize_.y - windowSize_.y) / 2)
    );
}

sf::Vector2u View::getScreenResolution() {
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    return sf::Vector2u(desktop.width, desktop.height);
}

bool View::open() {
    return window_.isOpen();
}

void View::close() {
    window_.close();
}

void View::draw(Player* player) {
    pollEvent();
    drawToWindow(player);
}

void View::pollEvent() {
    sf::Event event;

    while (window_.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window_.close();
        }
    }
}

void View::drawToWindow(Player* player) {
    window_.clear();
    player->draw(window_);
    window_.display();
}