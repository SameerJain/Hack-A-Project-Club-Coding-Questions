#include <iostream>
#include "ttt_functions.h"
#include "ttt_functions.cpp"
using namespace std;

int main()
{

    intro();

while (!best_Of_5) {

    draw_board();

    while (!gameOver)
    {

        turn();

        game(input);
        
        draw_board();

        wincheck();
    }
    

    
    results();

    reset_game();    

}


finale();

    return 0;
}
