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
     * @brief An enumeration for representing different events.
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
        QUIT, /*The "quit" event. */
        KEY_A,
        KEY_B,
        KEY_C,
        KEY_D,
        KEY_E,
        KEY_F,
        KEY_G,
        KEY_H,
        KEY_I,
        KEY_J,
        KEY_K,
        KEY_L,
        KEY_M,
        KEY_N,
        KEY_O,
        KEY_P,
        KEY_Q,
        KEY_R,
        KEY_S,
        KEY_T,
        KEY_U,
        KEY_V,
        KEY_W,
        KEY_X,
        KEY_Y,
        KEY_Z
    };

    /**
     * @brief A strcture for representing a entity in the game.
     * for example: a player, a wall, a monster, a bonus, etc.
     * @param id The id of the entity.
     * @param pos The position of the entity.
     * @param direction The direction of the entity (vector).
     * @param type The type of the entity.
     * @param speed The speed of the entity.
     * @param display A boolean to know if the entity is displayed or not.
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
     * @brief A structure to store all the informations about the game.
     * @struct Game
     * @param entity A vector of all the entities in the game.
     * @param map A vector of all the entities in the map.
     * @param name The name of the user.
     * @param score The score of the user.
     * @param mouse_pos The position of the mouse.
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
