#include <iostream>
#include "ttt.h"
using namespace std;

int main() {

    while (1) {
        char marks[3] = {-3, P1, P2};
        ttt b;
        
        system("clear");
        draw_title();
        init_board(&b);
        
        system("clear");
        draw_title();
        draw_board(&b);

        int winner;
        while (1) {
            position p = get_position(&b);
            (b.board)[p.row][p.col] = marks[b.turn];
            system("clear");
            draw_title();
            draw_board(&b);

            winner = check_winner(&b);
            if (winner == 1 || winner == 2) { // p1 win
                cout << "Player" << winner << " win the game!" << endl;
                break;
            } else if (winner == 3) { // d
                cout << "Draw the game!" << endl;
                break;
            } else {
                if (b.turn == 1) b.turn = 2;
                else  b.turn = 1;
            }
        }

        if (winner == 1 || winner == 2) {
            cout << "Do you want to play again? (Y/y)" << endl;
            char restart;
            cin >> restart;
            if (restart != 'y' && restart != 'Y') {
                destroy_board(&b);
                break;
            }
        }
    }

    return 0;
}
