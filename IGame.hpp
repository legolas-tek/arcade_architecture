/*
** EPITECH PROJECT, 2023
** architecture
** File description:
** IGame
*/

#ifndef IGAME_HPP_
    #define IGAME_HPP_

    #include "Arcade.hpp"
    #include <vector>
    #include <string>

/**
** @brief Arcade namespace.
*/
namespace arcd {

    /**
    ** @brief An interface for defining different arcade games.
    ** Each games specific assets or elements will be created in the game constructor
    ** in order to keep it generics.
    */
    class IGame {
        public:
            /** @brief Pure virtual destructor.*/
            virtual ~IGame() = default;

            /** 
            ** @brief This function will update every states and elements of the
            ** game in relation to the event passed in parameters. */
            virtual void update(arcd::event_t event) = 0;

            /** @brief Get the last updated map in order to draw it with a graphical library.*/
            virtual std::vector<std::string> &getMap() = 0;
    };
};

#endif /* !IGAME_HPP_ */
