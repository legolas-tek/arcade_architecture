/*
** EPITECH PROJECT, 2023
** arcade_architecture [SSH: 192.168.161.128]
** File description:
** arcade
*/

#ifndef ARCADE_HPP_
    #define ARCADE_HPP_
    #include <utility>

/**
** @brief Arcade namespace.
*/
namespace arcade {

    /**
    @brief An enumeration for representing different events.
    */
    typedef enum event_e {
        NOTHING = 0, /* do nothing */
        UP, /*The "up" event. */
        DOWN, /*The "down" event. */
        LEFT, /*The "left" event. */
        RIGHT, /*The "right" event. */
        PAUSE, /*The "pause" event. */
        QUIT /*The "quit" event. */
    } event_t;

    /**
    ** @brief A direction enum that enumerates each directions.
    */
    typedef enum direction_e {
        DIR_TOP = 't', /* Top directions.*/
        DIR_LEFT = 'l', /* Left directions.*/
        DIR_RIGHT = 'r', /* Right directions.*/
        DIR_BOTTOM = 'b', /* Bottom directions.*/
        DIR_NOTHING = 0
    } direction_t;

    /**
    ** @brief An element enum that put a name on
    ** every possible rendered element.
    */
    typedef enum element_e {
        PLAYER = 'p', /* The PLAYER.*/
        WALL = 'w', /* The WALL.*/
        FOOD = 'f', /* The FOOD.*/
        BERRY = 'x', /* The BERRY.*/
        EMPTY = 'o' /* Empty space*/
    } element_t;

    /**
    ** @brief A complement to the enum element_e that
    ** allow to specify the type of the elem.
    */
    typedef enum element_spec_e {
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
    } element_spec_t;

    typedef struct entity_s {
        element_t type;
        element_spec_t spec;
        std::pair<double, double> pos;
        double speed;
        direction_t direction;
        bool isAlive;
    } entity_t;
}

#endif /* !ARCADE_HPP_ */
