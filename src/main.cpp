#include <iostream>
#include <SDL.h>

#include "app.hpp"

void run_loop (void * ptr)
{
    auto game_ptr = static_cast<game::app *>(ptr);
    game_ptr->run();
}

int main()
{
    int simulate_infinite_loop = 1;
    game::app game;
    emscripten_set_main_loop_arg(run_loop, static_cast<void *>(&game), -1, simulate_infinite_loop);
}
