#include <iostream>
#include "ttt.h"
using namespace std;

ttt b = { ...};
void init_board(ttt* b) {
    b->size = 3;
    b->turn = 1;
    b->board = new char*[b->size];
    for (int i = 0; i < 3; i++)
        b->board[i] = new char[b->size];
        
    for (int row = 0, num = 1; row < b->size; row++) {
        for (int col = 0; col < b->size; col++) {
            b->board[row][col] = '0' + num++;
        }
    }
}

void destroy_board(ttt* b) {
    for (int i = 0; i < 3; i++)
        delete [] b->board[i];
    delete [] b->board;
}

void draw_title() {
    cout << "==========================" << endl;
    cout << "       TIC TAC TOE" << endl;
    cout << "Player1 : O   Player2 : X" << endl;
    cout << "==========================" << endl << endl;
}

void draw_board(ttt* b) {
    cout << " -------------" << endl;
    for (int i = 0; i < b->size; i++) {
        for (int j = 0; j < b->size; j++) {
            cout << " | " << (b->board)[i][j];
        }
        cout << " |" << endl;
        cout << " -------------" << endl;
    }
}

bool is_marked(ttt *b, position p) {
    if ((b->board)[p.row][p.col] == 'O'
            || (b->board)[p.row][p.col] == 'X')
        return true;
    return false;
}
