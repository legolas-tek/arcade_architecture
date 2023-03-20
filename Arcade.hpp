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
namespace arcd {

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
        DIR_TOP,
        DIR_LEFT,
        DIR_RIGHT,
        DIR_BOTTOM
    } direction_t;

    typedef enum element_e {
        PLAYER,
        WALL,
        FOOD,
        BERRY
    } element_t;

    typedef enum element_spec_e {
        TOP_W_L,
        TOP_W_R,
        BOT_W_L,
        BOT_W_R,
        W_T,
        W_B,
        W_L,
        W_R,
        W_B_C,
        W_T_C,
        W_L_C,
        W_R_C,
    } element_spec_t;

    struct entity_s {
        element_t type;
        element_spec_t spec;
        std::pair<double, double> pos;
        double speed;
        direction_t direction;
        bool isAlive;
    };
}

#endif /* !ARCADE_HPP_ */
