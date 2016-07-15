#include "TicTacToe.h"

TicTacToe::TicTacToe() {
  game_status = PLAYER1;
  initialize_board();
  //Player p1 (HUMAN);
  //Player p2 (HUMAN);
}

TicTacToe::TicTacToe(int p1_type, int p2_type) {
  game_status = PLAYER1;
  initialize_board();
}

void TicTacToe::print() {
  for (int row : {0,1,2}) {
    cout << "----------" << endl;
    for (int col : {0,1,2}) {
      cout << as_symbol(row,col) << "|";
    }
    cout << endl;
  }
}

void TicTacToe::initialize_board() {
  for (int row : {0,1,2}) {
    for (int col : {0,1,2}) {
      board[row][col] = 0;
    }
  }
}

char TicTacToe::as_symbol (int player_here) {
  if (player_here == 1) {
    return 'X';
  }
  if (player_here == 2) {
    return 'O';
  }
  return ' ';
}
