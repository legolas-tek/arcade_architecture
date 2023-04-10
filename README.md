# Arcade - Epitech

Arcade is an Epitech project, that have for goal to implement diffents, game and graphical libraries.
After all, the goal is to have to possibility to share you're libraries with another team that have the same architecture as you.

## Usage/Examples

```cpp


/**
 * @brief Include the Graphical interface to use it.
*/
#include "Arcade.hpp
#include "IGraphical.hpp"
#include "IGame.hpp"


// Main function
int main(int argc, char *argv[])
{
    /**
    ** @brief Create a library instance with the path to the .so file gived by the user.
    ** The loadLibrary(char *path) function will open the asked library and will return a IGraphical class.
    */
    arcade::IGraphical *library = loadLibrary(argv[1]);
    /**
    ** @brief Create a game instance with the path to the .so file gived by the user.
    ** The loadGame(char *path) function will open the asked library and will return a IGame class.
    */
    arcade::IGame *game = loadGame(argv[2]);
    /**
    ** @brief Create an event variable to store the actual event
    */
    arcade::Event event = arcade::Event::NOTHING;

    /**
    ** @brief Loop the game while the actual event isn't a "quit" event
    */
    while (event != QUIT) {

        /**
        ** ------------------------------------------
        ** @brief Initialization of you're delta time.
        */
        auto end = std::chrono::steady_clock::now();
        auto delta = std::chrono::duration_cast<std::chrono::duration<double>>(end - start).count();

        start = end;

        /**
        ** @brief This was an example of how you could implement a delta time for you're games.
        ** ------------------------------------------
        ** ------------------------------------------
        */

        /**
        ** ------------------------------------------
        ** @brief Get the last game's Entity structure to render it whith you're graphical
        ** library.
        ** This game Entity will contains all the newest informations that the game had calculate
        ** that are ready to be rendered.
        */

        gameEntity = game->getGameEntity();

        /**
        ** ------------------------------------------
        ** ------------------------------------------
        */

        /**
        ** ------------------------------------------
        ** @brief Like said before, the gameEntity received sooner will directly
        ** be send to the graphical library to be rendered.
        */

        graphical->renderElement(gameEntity);

        /**
        ** ------------------------------------------
        ** ------------------------------------------
        */

        /**
        ** ------------------------------------------
        ** @brief Here, we will get the last user events that the graphical library had received.
        ** We will stock them in order to use them when we will need to.
        */

        event = graphical->getEvent(game->getGameEntity());

        /**
        ** ------------------------------------------
        ** ------------------------------------------
        */

        /**
        ** ------------------------------------------
        ** @brief In case the user would want to change his game or graphical interfaces,
        ** you could get this information from this function.
        */

        index = game->getNextLib();

        handleCoreEvent(event, index);
        /* If some events concern the core/menu you can for exemple handle them directly in your main loop.*/

        /**
        ** @brief This was an example of how you could the changement of library's.
        ** ------------------------------------------
        ** ------------------------------------------
        */

        /**
        ** ------------------------------------------
        ** @brief After that you've taked all the information's needed for you're game to change his state,
        ** you can call the update(event, delta) of you're game to change his state according to the received demands.
        */

        game->update(event, delta);

        /**
        ** ------------------------------------------
        ** ------------------------------------------
        */
    }
    /**
    ** @brief Everythings will be destroyed by their destructor.
    */
}
```

## Authors

-   [@jeremyelalouf](https://www.github.com/jeremyelalouf)
-   [@tzhengtek](https://www.github.com/tzhengtek)
-   [@yunse-lee-EPITECH](https://www.github.com/yunse-lee-EPITECH)
-   [@LindonAliu](https://www.github.com/LindonAliu)
