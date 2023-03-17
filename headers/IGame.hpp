/*
** EPITECH PROJECT, 2023
** architecture
** File description:
** IGame
*/

#ifndef IGAME_HPP_
    #define IGAME_HPP_

    #include "arcade.hpp"
    #include <vector>
    #include <map>
    #include <string>
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

            /** @brief Handle Event with the received parameter */
            virtual void handleEvent(arcd::event_t event) = 0;

            /** @brief Load of map of the game */
            virtual std::vector<std::string> loadMap(std::string path) = 0;

            /** @brief Load Scene */
            virtual void loadScene(std::string path) = 0;

            class Error : public std::exception {
                public:
                    Error(const std::string &error)
                        : _error(error) {};
                    const char *what() const noexcept
                    {
                        return ("Game:" + _error).c_str();
                    };

                private:
                    std::string _error;
            };
    };
};
#endif /* !IGAME_HPP_ */
