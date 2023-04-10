/*
** EPITECH PROJECT, 2023
** architecture
** File description:
** IGraphical
*/

#ifndef IGRAPHICAL_HPP_
    #define IGRAPHICAL_HPP_

    #include <string>
    #include <vector>
    #include <map>
    #include "Arcade.hpp"

namespace arcade {

    /**
    ** @brief An interface for defining graphical libraries.
    ** @details This interface is used to define the graphical libraries that will be used in the arcade.
    ** The graphical libraries must implement all the functions of this interface. In order to be loaded by the arcade.
    */
    class IGraphical {
        public:
            /**
            ** @brief Destroy the IGraphical object
            ** Pure virtual destructor for the interface.
            */
            virtual ~IGraphical() = default;

            /**
            ** @brief Get the event received if there is one.
            ** @param game The game object to fill it in case of an event.
            ** @return The received event name.
            */
            virtual arcade::Event getEvent(arcade::Game &game) = 0;

            /**
            ** @brief Set the size of the map to draw for the graphical library.
            ** @param mapSize a pair of int containing the map size, the first is the width and the second is the height.
            */
            virtual void setMapSize(std::pair<int, int> mapSize) = 0;

            /**
            ** @brief Draw all the elements contained in the game object.
            ** @param game The game object that contains all the information needed to draw anything.
            */
            virtual void renderElement(const arcade::Game &game) = 0;

            /**
            ** @brief Set the asset path for the graphical library.
            ** @param path The path to the assets to use.
            */
            virtual void setAssetPath(const std::string &path) = 0;
    };
}

#endif /* !IGRAPHICAL_HPP_ */