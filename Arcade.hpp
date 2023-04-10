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
** @details This namespace is used to define all the classes and functions that will be used in the arcade.
** The graphical libraries and the games must use this namespace.
*/
namespace arcade {

    /**
    ** @brief An enumeration for representing different events.
    ** @details This enumeration is used to represent the different events that can be received by the graphical library.
    ** In order to handle the user input in the arcade, the graphical library must return one of these events.
    */
    enum class Event {
        NOTHING = 0, /* Do nothing */
        UP, /*The "up" event. */
        DOWN, /*The "down" event. */
        LEFT, /*The "left" event. */
        RIGHT, /*The "right" event. */
        NEXT_GRAPHIC, /*The "next graphic" event. */
        NEXT_GAME, /*The "next game" event. */
        MENU, /*The "menu" event. */
        RESTART, /*The "restart" event. */
        MOUSE_CLICK, /*The "mouse click" event. */
        QUIT, /*The "quit" event. */
        KEY_A, /* The "A" key.*/
        KEY_B, /* The "B" key.*/
        KEY_C, /* The "C" key.*/
        KEY_D, /* The "D" key.*/
        KEY_E, /* The "E" key.*/
        KEY_F, /* The "F" key.*/
        KEY_G, /* The "G" key.*/
        KEY_H, /* The "H" key.*/
        KEY_I, /* The "I" key.*/
        KEY_J, /* The "J" key.*/
        KEY_K, /* The "K" key.*/
        KEY_L, /* The "L" key.*/
        KEY_M, /* The "M" key.*/
        KEY_N, /* The "N" key.*/
        KEY_O, /* The "O" key.*/
        KEY_P, /* The "P" key.*/
        KEY_Q, /* The "Q" key.*/
        KEY_R, /* The "R" key.*/
        KEY_S, /* The "S" key.*/
        KEY_T, /* The "T" key.*/
        KEY_U, /* The "U" key.*/
        KEY_V, /* The "V" key.*/
        KEY_W, /* The "W" key.*/
        KEY_X, /* The "X" key.*/
        KEY_Y, /* The "Y" key.*/
        KEY_Z /* The "_" key.*/
    };

    /**
    ** @brief A strcture for representing a entity in the game.
    ** for example: a player, a wall, a monster, a bonus, etc.
    ** @param id The id of the entity.
    ** @param pos The position of the entity.
    ** @param direction The direction of the entity (vector).
    ** @param type The type of the entity.
    ** @param speed The speed of the entity.
    ** @param display A boolean to know if the entity is displayed or not.
    */
    struct Entity {
        int id;
        std::pair<double, double> pos;
        std::pair<double, double> direction;
        std::string type;
        double speed;
        bool display;
    };

    /**
    ** @brief A structure to store all the informations about the game.
    ** @struct Game
    ** @param entity A vector of all the entities in the game.
    ** @param map A vector of all the entities in the map.
    ** @param name The name of the user.
    ** @param score The score of the user.
    ** @param mouse_pos The position of the mouse.
    */
    struct Game {
        std::vector<arcade::Entity> entity;
        std::vector<arcade::Entity> map;
        std::string name;
        std::size_t score;
        std::pair<int, int> mouse_pos;
    };
}

#endif /* !ARCADE_HPP_ */
