#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
    // Init srand
    srand(static_cast<unsigned>(time(NULL)));

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