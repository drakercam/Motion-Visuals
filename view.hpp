#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "player.hpp"

#ifndef VIEW_HPP
#define VIEW_HPP

class View {
    private:
        // Screen and window size information
        sf::Vector2u screenSize_;
        sf::Vector2u windowSize_;
        sf::Vector2i windowPosition_;
        sf::RenderWindow window_;
        void pollEvent();
        void drawToWindow(Player* player);
        void setWindowPosition();
        void setScreenSize();

    public:
    
        View(float x, float y);
        void setWindowSize(float x, float y);
        sf::Vector2u getScreenResolution();
        void draw(Player* player);
        bool open();
        void close();
};

#endif