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

namespace arcade {
    /**
    @brief An enumeration for representing different events.
    */
    typedef enum event_e {
        UP, /*The "up" event. */
        DOWN, /*The "down" event. */
        LEFT, /*The "left" event. */
        RIGHT, /*The "right" event. */
        PAUSE, /*The "pause" event. */
        QUIT /*The "quit" event. */
    } event_t;

    /**
    @brief An interface for defining graphical libraries.
    */
    class IGraphical {
        public:
            /* @brief Virtual destructor.*/
            virtual ~IGraphical() = default;

            /** @brief Create a window.*/
            virtual void createWindow(std::size_t width, std::size_t height) = 0;
            /** @brief Destroy a window. */
    	    virtual void destroyWindow() = 0;
            /**
            @brief Return the event received if there is one.
            @return The received event name.
            */
            virtual event_t getEvent() const = 0;

            /**
            ** @brief Create a sprite
            ** @param path_to_sprite Path to the sprite to be created
            ** @return 0 if everything was good, else -1
            */
            virtual int createSprite(std::string path_to_sprite) = 0;
            /**
            ** @brief Delete every sprites loaded
            ** @return 0 if everything was good, else -1
            */
            virtual int deleteSprites() = 0;
            /**
            ** @brief Draw every sprites loaded in memory.
            */
            virtual void drawSprites() const = 0;

            /** @brief Play music.*/
            virtual void playMusic() = 0;
            /** @brief Stop music.*/
            virtual void stopMusic() = 0;
    };
};

#endif /* !IGRAPHICAL_HPP_ */
