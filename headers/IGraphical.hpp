/*
** EPITECH PROJECT, 2023
** architecture
** File description:
** IGraphical
*/

#ifndef IGRAPHICAL_HPP_
    #define IGRAPHICAL_HPP_


/**
@brief An enumeration for representing different events.
*/
typedef enum event_e event_t;
enum event_e {
    UP, /*The "up" event. */
    DOWN, /*The "down" event. */
    LEFT, /*The "left" event. */
    RIGHT, /*The "right" event. */
    PAUSE, /*The "pause" event. */
    QUIT /*The "quit" event. */
};

/**
@brief An interface for defining graphical libraries.
*/
class IGraphical {
    public:
        /* @brief Virtual destructor.*/
        virtual ~IGraphical() = default;

        /** @brief Create a window.*/
        virtual void createWindow() = 0;
        /** @brief Destroy a window. */
	    virtual void destroyWindow() = 0;
        /**
        @brief Return the event received if there is one.
        @return The received event name.
        */
        virtual event_t getEvent() = 0;
};

#endif /* !IGRAPHICAL_HPP_ */
