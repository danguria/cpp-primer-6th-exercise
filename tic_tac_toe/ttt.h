#ifndef TTT_H_
#define TTT_H_

enum MARK { P1 = 'O', P2 = 'X' };

struct ttt {
    int size;
    int** board;
    int turn;
};

struct position {
    int col, row;
};

// function prototypes
void init_board(ttt* b);
void destroy_board(ttt* b);
void draw_title();
void draw_board(ttt* b);
bool is_marked(ttt* b, position p);
bool is_out_of_board(ttt* b, position p);
position get_position(ttt *b);
bool check_winner(ttt *b, int player);

// return 1 if player1 win
// return 2 if player2 win
// return 3 if draw
// return 4 otherwise
int check_winner(ttt *b);

#endif // TTT_H_
