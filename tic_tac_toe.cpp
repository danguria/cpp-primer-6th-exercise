#include <iostream>
using namespace std;

void show_board(int player, int pos) {
    char board[] = "123456789";
    if (player == 1) {
        // pos = 1
        board[pos - 1] = 'O';
    } else { // player == 2
        board[pos - 1] = 'X';
    }

    cout << "-------------" << endl;
    cout << "| " << board[0] << " | " << board[1] << " | " << board[2] << " |" << endl;
    cout << "-------------" << endl;
    cout << "| " << board[3] << " | " << board[4] << " | " << board[5] << " |" << endl;
    cout << "-------------" << endl;
    cout << "| " << board[6] << " | " << board[7] << " | " << board[8] << " |" << endl;
    cout << "-------------" << endl;
}

void draw_title() {
    // just draw the title
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
    // return true if the position was already marked
    // return false otherwise
    return false;
}

int get_position(char *board, int turn) {

    // 1. print a message "Player(1 or 2)'s turn"
    // 2. print a message "Enter a position you wan to mark: "
    // 3. get the user input
    // 4. return position if the position hasn't been marked
    // 5. ask again otherwise
    // hint: 4 and 5 can be implemented by "is_marked" function and while loop
    return 0;
}

void mark(char *board, int turn, int pos) {
    // just put O or X to the board at the position
}

int main() {

    // initial state
    char board[] = "123456789";
    draw_title();
    draw_board(board);

    int turn = 1;
    while (1) {
        int pos = get_position(board, turn);
        if (turn == 1)
            board[pos-1] = 'O';
        else if (turn == 2)
            board[pos-1] = 'X';

        draw_board(board);
        if (turn == 1) turn = 2;
        else  turn = 1;
    }

    // 1. ask player1 or player2 to enter a position using "get_position" function
    // 2. mark O or X to the board at the position using "mark" function
    // 3. re-draw the board using "draw_board" function
    // 4. change the turn - use a variable that remember current turn
        //turn = 2;
    // 5. repeat 1, 2, and 3 using while loop

    return 0;
}
