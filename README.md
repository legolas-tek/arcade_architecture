# Arcade - Epitech

Arcade is an Epitech project, that have for goal to implement diffents, game and graphical libraries.
After all, the goal is to have to possibility to share you're libraries with another team that have the same architecture as you.

## Usage/Examples

```cpp


/**
 * @brief Include the Graphical interface to use it.
*/
#include "IGraphical.hpp"


// Main function
int main(int argc, char *argv[])
{
    /**
     * @brief Create a library instance with the path to the .so file gived by the user.
     * The loadLibrary(char *path) function will open the asked library and will return a IGraphical class.
    */
    IGraphical library = loadLibrary(argv[1]);

    /**
     * @brief Create a window with the IGraphical library class.
    */
    library.createWindow();

    /**
     * @brief Loop of the game until the library.getEvent() function return the "quit" event.
    */
    while (library.getEvent() != QUIT) {
        /**
        * Not thinked yet
        **/
    }
    /**
     * @brief Destroy the window created by the IGraphical library class.
    */
    library.destroyWindow();
}
```

## Authors

-   [@jeremyelalouf](https://www.github.com/jeremyelalouf)
-   [@tzhengtek](https://www.github.com/tzhengtek)
-   [@yunse-lee-EPITECH](https://www.github.com/yunse-lee-EPITECH)
-   [@LindonAliu](https://www.github.com/LindonAliu)
