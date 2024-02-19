/*
** EPITECH PROJECT, 2020
** Pikmins
** File description:
** main.cpp
*/
#include "GameEngine.hpp"
#include "LandingMenu.hpp"

int main()
{
    bomberman::core::GameEngine game;

    try {
        game.init();
        game.changeState(bomberman::menu::LandingMenu::getInstance());
        game.gameLoop();
        game.cleanup();
    } catch (bomberman::core::Errors const &error) {
        std::cout << error.what() << " " + error.getErrorType() << std::endl;
        return 84;
    }
    return 0;
}