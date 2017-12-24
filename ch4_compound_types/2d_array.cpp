#include <iostream>
using namespace std;

void passing_single_array1(int board[3]) {
    board[0] = 0;
}

void passing_single_array2(int board[]) {
    board[0] = -1; // board + 0
}

void passing_2d_array1(int board2D[][3]) {
    board2D[0][0] = 0;
}

void passing_2d_array2(int board2D[3][3]) {
    board2D[0][0] = -1;
}

int main() {

    int board[9] = {1, 2, 3, 4, 5, 6, 7, 8,9};


    // board + (idex * size of array type)
    cout << board[4] << endl;      // *(board + 4)
    cout << *(board + 4) << endl;  // *(board + 4)
    cout << board << endl;         // board
    cout << board + 4 << endl;     // board + 4


    int board2D[3][3];
    int num = 1;
    for (int row = 0; row < 3; row++) 
        for (int col = 0; col < 3; col++) 
            board2D[row][col] = num++;

    // (board2d + (row index * sizeof row) + col index * size of array type
    cout << board2D[1][1] << endl;   // 5
    cout << *(*(board2D + 1) + 1) << endl;

    // ------------------------

    passing_single_array1(board);
    cout << board[0] << endl; // 0
    passing_single_array2(board); 
    cout << board[0] << endl; // -1
    passing_2d_array1(board2D);
    cout << board2D[0][0] << endl; // 0
    passing_2d_array2(board2D);
    cout << board2D[0][0] << endl; // -1

    return 0;
}
