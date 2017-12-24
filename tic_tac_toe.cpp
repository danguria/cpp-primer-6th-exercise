#include <iostream>
using namespace std;

const int size_board = 3;

void draw_title() {
    cout << "==========================" << endl;
    cout << "       TIC TAC TOE" << endl;
    cout << "Player1 : O   Player2 : X" << endl;
    cout << "==========================" << endl << endl;
}

void draw_board(char board[][size_board]) {
    // TODO: tk
    // just draw current board
    cout << "-------------" << endl;
    cout << "| " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " |" << endl;
    cout << "-------------" << endl;
    cout << "| " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " |" << endl;
    cout << "-------------" << endl;
    cout << "| " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " |" << endl;
    cout << "-------------" << endl;
}

bool is_marked(char board[][size_board], int pos) {
    int row = pos / size_board;
    int col = (pos % size_board) - 1;
    if (board[row][col] == 'O' || board[row][col] == 'X')
        return true;
    return false;
}

bool is_out_of_board(int pos) {
    return pos < 0 || 9 < pos;
}

int get_position(char board[][size_board], int turn) {
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

bool check_winner(char board[][size_board], int player) {
    // TODO: tk
    char mark = player == 1? 'O' : 'X';

    // horizontal lines
    if (board[0][0] == mark && board[0][1] == mark && board[0][2] == mark) return true;
    if (board[1][0] == mark && board[1][1] == mark && board[1][2] == mark) return true;
    if (board[2][0] == mark && board[2][1] == mark && board[2][2]) return true;

    // vertical lines
    if (board[0][0] == mark && board[1][0] == mark && board[2][0] == mark) return true;
    if (board[0][1] == mark && board[1][1] == mark && board[2][1] == mark) return true;
    if (board[0][2] == mark && board[1][2] == mark && board[2][2] == mark) return true;

    // diagonal lines
    if (board[0][0] == mark && board[1][1] == mark && board[2][2] == mark) return true;
    if (board[2][0] == mark && board[1][1] == mark && board[0][2] == mark) return true;

    return false;
}
// return 1 if player1 win
// return 2 if player2 win
// return 3 if draw
// return 4 otherwise
int check_winner(char board[][size_board]) {
    if (check_winner(board, 1)) return 1;
    if (check_winner(board, 2)) return 2;

    int remaings = 0;
    for (int row = 0; row < size_board; row++) {
        for (int col = 0; col < size_board; col++) {
            if (board[row][col] != 'O' && board[row][col] != 'X')
                remaings++;
        }
    }

    // draw
    if (remaings == 0) return 3;
    // otherwise
    return 4;
}

int main() {


    int turn = 1;
    while (1) {
        char board[size_board][size_board];
        for (int row = 0, num = 1; row < size_board; row++) {
            for (int col = 0; col < size_board; col++) {
                board[row][col] = '0' + num++;
            }
        }
        char marks[3] = {'?', 'O', 'X'};

        system("clear");
        draw_title();
        draw_board(board);

        int winner;
        while (1) {
            int pos = get_position(board, turn);
            int row = pos / size_board;
            int col = (pos % size_board) - 1;
            board[row][col] = marks[turn];
            system("clear");
            draw_title();
            draw_board(board);

            winner = check_winner(board);
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

        if (winner == 1 || winner == 2) {
            cout << "Do you want to play again? (Y/y)" << endl;
            char restart;
            cin >> restart;
            if (restart != 'y' && restart != 'Y')
                break;
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

    // make the tic tac toe general
    // 1. change board to two dimensional array of size 3 x 3 
    // 2. request a player to a size of board N

    return 0;
}
