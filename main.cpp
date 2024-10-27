#include <iostream>
#include "Game.h"

using namespace std;
//using namespace sf;

int main()
{
    // Init game engine
    Game game;

    // Game loop
    while (game.running())
    {
        // Update
        game.update();

        // Render
        game.render();
    }

    return 0;
}