/*
** EPITECH PROJECT, 2023
** arcade_architecture
** File description:
** arcade
*/

#ifndef ARCADE_HPP_
    #define ARCADE_HPP_
    #include <utility>
    #include <vector>

/**
** @brief Arcade namespace.
*/
namespace arcade {

    /**
    @brief An enumeration for representing different events.
    */
    enum class Event {
        NOTHING = 0, /* do nothing */
        UP, /*The "up" event. */
        DOWN, /*The "down" event. */
        LEFT, /*The "left" event. */
        RIGHT, /*The "right" event. */
        PAUSE, /*The "pause" event. */
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


    enum class Status {
        PLAYING = 0,
        WIN,
        LOSE,
    };

    /**
    ** @brief An element enum that put a name on
    ** every possible rendered element.
    */
    enum class GraphicElement : char {
        PLAYER = 'p', /* The PLAYER.*/
        ENEMY = 'e', /* The ENEMY.*/
        WALL = 'w', /* The WALL.*/
        FOOD = 'f', /* The FOOD.*/
        BERRY = 'x', /* The BERRY.*/
        EMPTY = 'o' /* Empty space*/
    };

    /**
    ** @brief A complement to the enum element_e that
    ** allow to specify the type of the elem.
    */
    enum class GraphicElementSpec : char {
        TOP_W_L = 'a', /* A wall top left corner. */
        TOP_W_R = 'b', /* A wall top right corner.*/
        BOT_W_L = 'c', /* A wall bottom left corner.*/
        BOT_W_R = 'd', /* A wall bootom right corner.*/
        W_T = 'e', /* The top wall.*/
        W_B = 'g', /* The bottom wall.*/
        W_L = 'h', /* The left wall.*/
        W_R = 'i', /* The right wall.*/
        W_B_C = 'j', /* The center bottom wall.*/
        W_T_C = 'k', /* The center top wall.*/
        W_L_C = 'l', /* The center left wall.*/
        W_R_C = 'm', /* The center right wall.*/
        SPEC_NOTHING = 0
    };

    struct Entity {
        char name;
        arcade::GraphicElement type;
        arcade::GraphicElementSpec spec;
        std::pair<double, double> pos;
        double speed;
        arcade::Direction direction;
        bool isAlive;
    };

    struct Game {
        std::vector<arcade::Entity> entity;
        std::vector<arcade::Entity> map;
        std::size_t score;
        std::size_t time;
        arcade::Status status = Status::PLAYING;
    };
}

#endif /* !ARCADE_HPP_ */
