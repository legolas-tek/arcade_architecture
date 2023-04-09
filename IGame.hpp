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
 * @brief Arcade namespace.
 * 
 */
namespace arcade {

    /**
     * @brief An interface for defining different arcade games.
     * Each games specific assets or elements will be created in the game constructor
     * in order to keep it generics.
    */
    class IGame {
        public:
            /**
             * @brief Destroy the IGame object
             * Pure virtual destructor for the IGame interface.
            */
            virtual ~IGame() = default;

            /**
             * @brief This function will update every states and elements of the
             * game in relation to the event passed in parameters.
             * @param event the event to handle.
             * @param deltaTime the time elapsed since the last update.
            */
            virtual void update(arcade::Event event, double deltaTime) = 0;

            /**
             * @brief Get all the informations about the game to draw on the screen.
             * @return the last update of the game.
            */
            virtual arcade::Game &getGameEntity() = 0;

            /** @brief Get the size of the map to print on the screen.
             *  @return a pair of int representing the size of the map, the first int is the width, the second is the height.
            */
            virtual const std::pair<int, int> getMapSize() const = 0;

            /** @brief Get the next library to load.
             *  @return a pair of int representing the next library to load, the first int is the type of the library, the second is the index of the library.
            */
            virtual const std::pair<int, int> getNextLib() const = 0;

            /** @brief Get the path of the asset to load.
             *  @return a string representing the path of the asset to load.
            */
            virtual const std::string getAssetPath() const = 0;
    };
};

#endif /* !IGAME_HPP_ */
