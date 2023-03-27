/*
** EPITECH PROJECT, 2023
** arcade_architecture
** File description:
** arcade
*/

#ifndef ARCADE_HPP_
    #define ARCADE_HPP_
    #include <utility>
    #include <string>
    #include <vector>

/**
** @brief Arcade namespace.
*/
namespace arcade {

    /**
     * @brief An enumeration for representing different Library type
     */
    enum class LibraryType {
        GAME = 0,
        GRAPHIC = 1,
    };

    /**
    @brief An enumeration for representing different events.
    */
    enum class Event {
        NOTHING = 0, /* do nothing */
        UP, /*The "up" event. */
        DOWN, /*The "down" event. */
        LEFT, /*The "left" event. */
        RIGHT, /*The "right" event. */
        NEXT_GRAPHIC,
        NEXT_GAME,
        MENU,
        RESTART,
        MOUSE_CLICK,
        QUIT /*The "quit" event. */
    };

    /**
    ** @brief A direction enum that enumerates each directions.
    */
    enum class Direction : char {
        DIR_TOP = 't', /* Top directions.*/
        DIR_LEFT = 'l', /* Left directions.*/
        DIR_RIGHT = 'r', /* Right directions.*/
        DIR_BOTTOM = 'b', /* Bottom directions.*/
        DIR_NOTHING = 0
    };

    struct Entity {
        int id;
        std::pair<double, double> pos;
        std::pair<double, double> direction;
        std::string type;
        double speed;
        bool display;
    };

    struct Game {
        std::vector<arcade::Entity> entity;
        std::vector<arcade::Entity> map;
        std::size_t score;
    };
}

#endif /* !ARCADE_HPP_ */
