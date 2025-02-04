#include "controller.hpp"

Controller::Controller() {
    init();
}

Controller::~Controller() {
}

void Controller::init() {
    startClock();
    view = new View(800.0f, 600.0f);
    player = new Player(400.0f, 300.0f);
}

void Controller::loop() {
    while (view->open()) {
        if (choice_ == -1) {
            view->close();   // close the window then exit the program
            break;
        }

        view->draw(player);
        update();
    }
}

void Controller::update() {

    getUserInput();
}

void Controller::startClock() {
    deltaTime_ = clock_.restart().asSeconds();
}

void Controller::registerUserInput(int choice) {
    player->move(choice);
}

// will need to fix input, but regardless I will hopefully be making a GUI in the window at some point for selection
void Controller::getUserInput() {
    int choice;

    std::cout << "To act upon the player, select one of the following options: (Enter 1, 2, 3, or 4)" << std::endl;
    std::cout << "  (1) Parametric" << std::endl;
    std::cout << "  (2) Orbit" << std::endl;
    std::cout << "  (3) Translate" << std::endl;
    std::cout << "  (4) Rotate" << std::endl;
    std::cout << "  (5) Type -1 to exit" << std::endl;

    std::cin >> choice;
    choice_ = choice;
    std::cout << "Selected Option: " << choice << std::endl << std::endl;

    if (!(choice == -1)) {
        registerUserInput(choice);
    }
}