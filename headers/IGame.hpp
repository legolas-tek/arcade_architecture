/*
** EPITECH PROJECT, 2023
** architecture
** File description:
** IGame
*/

#ifndef IGAME_HPP_
    #define IGAME_HPP_

/**
** @brief Arcade namespace.
*/
namespace arcd {

    /**
    ** @brief An interface for defining different arcade games.
    */
    class IGame {
        public:
            /** @brief Pure virtual destructor.*/
            virtual ~IGame() = default;
    };

}
#endif /* !IGAME_HPP_ */
