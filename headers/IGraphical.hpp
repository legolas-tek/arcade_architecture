/*
** EPITECH PROJECT, 2023
** architecture
** File description:
** IGraphical
*/

#ifndef IGRAPHICAL_HPP_
    #define IGRAPHICAL_HPP_

    #include <string>
    #include <array>
    #include "arcade.hpp"

namespace arcd {
    /**
    @brief An interface for defining graphical libraries.
    */
    class IGraphical {
        public:
            /* @brief Pure virtual destructor.*/
            virtual ~IGraphical() = default;

            /**
            ** @brief Get the event received if there is one.
            ** @return The received event name.
            */
            virtual arcd::event_t getEvent() const = 0;

            /**
            ** @brief Draw every sprites loaded in memory.
            */
            virtual void renderElement() const = 0;

            class Error : public std::exception {
                public:
                    Error(const std::string &error)
                        : _error(error) {};
                    const char *what() const noexcept
                    {
                        return ("Graphical:" + _error).c_str();
                    };

                private:
                    std::string _error;
            };
    };
};

#endif /* !IGRAPHICAL_HPP_ */