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
    #include "Arcade.hpp"

namespace arcade {
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
            virtual arcade::event_t getEvent() = 0;

            /**
            ** @brief Load the map that is needed to be draw.
            */
            virtual void renderElement(const std::vector<struct entity_s> &entitys) = 0;
    };
}

#endif /* !IGRAPHICAL_HPP_ */
