#include <iostream>
using namespace std;

void draw_title() {
    cout << "==========================" << endl;
    cout << "       TIC TAC TOE" << endl;
    cout << "Player1 : O   Player2 : X" << endl;
    cout << "==========================" << endl << endl;
}

void draw_board(char *board) {
    // just draw current board
    cout << "-------------" << endl;
    cout << "| " << board[0] << " | " << board[1] << " | " << board[2] << " |" << endl;
    cout << "-------------" << endl;
    cout << "| " << board[3] << " | " << board[4] << " | " << board[5] << " |" << endl;
    cout << "-------------" << endl;
    cout << "| " << board[6] << " | " << board[7] << " | " << board[8] << " |" << endl;
    cout << "-------------" << endl;
}

bool is_marked(char* board, int pos) {
    if (board[pos-1] == 'O' || board[pos-1] == 'X') 
        return true;
    return false;
}

bool is_out_of_board(int pos) {
    return pos < 0 || 9 < pos;
}

int get_position(char *board, int turn) {
    cout << "Player" << turn << "'s turn" << endl;
    cout << "Enter a position you want to mark: " << endl;

    int pos;
    cin >> pos;
    while (is_out_of_board(pos) || is_marked(board, pos)) {
        cout << "invalid position, select another position: ";
        cin >> pos;
    }

    return pos;
}

// return 1 if player1 win
// return 2 if player2 win
// return 3 if draw
// return 4 otherwise
int check_winner(char* board) {
    return 0;
}

int main() {

    // initial state
    char board[] = "123456789";
    char marks[3] = {'?', 'O', 'X'};
    draw_title();
    draw_board(board);

    int turn = 1;
    while (1) {
        int pos = get_position(board, turn);
        board[pos-1] = marks[turn];
        draw_board(board);

        int winner = check_winner(board);
        if (winner == 1 || winner == 2) { // p1 win
            cout << "Player" << winner << " win the game!" << endl;
            break;
        } else if (winner == 3) { // d
            cout << "Draw the game!" << endl;
            break;
        } else {
            if (turn == 1) turn = 2;
            else  turn = 1;
        }

    }

    // 1. ask player1 or player2 to enter a position using "get_position" function - done
    // 2. mark O or X to the board at the position using "mark" function - done
    // 3. re-draw the board using "draw_board" function - done
    // 4. change the turn - use a variable that remember current turn - done
    // 5. repeat 1, 2, 3, and 4 using while loop until the game finishes
    // 6. ask players to restart the game
    //   6.1 if playser type "Y or y", then do 1 ~ 5
    //   6.2 otherwise, terminate the program

    return 0;
}