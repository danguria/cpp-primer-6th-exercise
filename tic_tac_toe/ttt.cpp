#include <iostream>
#include "ttt.h"
using namespace std;

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

bool is_out_of_board(ttt* b, position p) {
    return !((p.row < b->size && p.row > -1 ) && (p.col < b->size && p.col > -1));
}

position get_position(ttt *b) {
    cout << "Player" << b->turn << "'s turn" << endl;
    cout << "Enter a position you want to mark: " << endl;

    position p;
    int pos;
    
    cin >> pos;
    p.row = (pos - 1) / b->size;
    p.col = (pos - 1) % b->size;

    while (is_out_of_board(b, p) || is_marked(b, p)) {
        cout << "invalid position, select another position: ";
        cin >> pos;
        p.row = pos / b->size;
        p.col = (pos % b->size) - 1;
    }

    return p;
}

bool check_winner(ttt* b, int player) {
    char mark = player == 1? 'O' : 'X';

    // horizontal lines
    for (int i = 0; i < b->size; i++) {
        bool win = true;
        for (int j = 0; j < b->size; j++) {
            if ((b->board)[i][j] != mark) { 
                win = false;
                break;
            }
        }
        if (win) return true;
    }

    // vertical lines
    for (int j = 0; j < b->size; j++) {
        bool win = true;
        for (int i = 0; i < b->size; i++) {
            if ((b->board)[i][j] != mark) { 
                win = false;
                break;
            }
        }
        if (win) return true;
    }

    // diagonal lines
    bool win = true;
    for (int i = 0, j = 0; i < b->size; i++, j++) {
        if ((b->board)[i][j] != mark) {
            win = false;
            break;
        }
    }
    if (win) return true;
   
    win = true;
    int i = 0, j = 2;
    while (i < b->size && j >= 0) {
        if ((b->board)[i][j] != mark) {
            win = false;
            break;
        }
        i++; j--;
    }
    if (win) return true;

    return false;
}
// return 1 if player1 win
// return 2 if player2 win
// return 3 if draw
// return 4 otherwise
int check_winner(ttt* b) {
    if (check_winner(b, 1)) return 1;
    if (check_winner(b, 2)) return 2;

    int remaings = 0;
    for (int row = 0; row < b->size; row++) {
        for (int col = 0; col < b->size; col++) {
            if ((b->board)[row][col] != 'O' && (b->board)[row][col] != 'X')
                remaings++;
        }
    }

    // draw
    if (remaings == 0) return 3;
    // otherwise
    return 4;
}
