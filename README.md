# Arcade - Epitech

Arcade is an Epitech project, that have for goal to implement diffents, game and graphical libraries.
After all, the goal is to have to possibility to share you're libraries with another team that have the same architecture as you.

## Usage/Examples

```cpp


/**
 * @brief Include the Graphical interface to use it.
*/
#include "IGraphical.hpp"
#include "IGame.hpp"


// Main function
int main(int argc, char *argv[])
{
    /**
     * @brief Create a library instance with the path to the .so file gived by the user.
     * The loadLibrary(char *path) function will open the asked library and will return a IGraphical class.
    */
    IGraphical *library = loadLibrary(argv[1]);
    /**
     * @brief Create a game instance with the path to the .so file gived by the user.
     * The loadGame(char *path) function will open the asked library and will return a IGame class.
    */
    IGame *game = loadGame(argv[2]);
    /**
     * @brief Create an event variable to store the actual event
    */
    event_t event = NOTHING;

    /**
     * @brief Loop the game while the actual event isn't a "quit" event
    */
    while (event != QUIT) {
        /**
         * @brief Update the actual event.
        */
        event = library.getEvent();
        /**
         * @brief Update the game state in relation with the actuel event.
        */
        game.update(event);
        /**
         * @brief Get the map after her update and pass it to the graphical library to re-render it.
        */
        library.loadMap(game.getMap());
    }
    /**
     * @brief Everythings will be destroyed by their destructor.
    */
}
```

## Authors

-   [@jeremyelalouf](https://www.github.com/jeremyelalouf)
-   [@tzhengtek](https://www.github.com/tzhengtek)
-   [@yunse-lee-EPITECH](https://www.github.com/yunse-lee-EPITECH)
-   [@LindonAliu](https://www.github.com/LindonAliu)
