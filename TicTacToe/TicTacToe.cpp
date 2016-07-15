#include <iostream>
#include "TicTacToe.h"

TicTacToe::TicTacToe() {
  status = PLAYER1;
  initialize_board();
  //Player p1 (HUMAN);
  //Player p2 (HUMAN);
}

TicTacToe::TicTacToe(int p1_type, int p2_type) {
  status = PLAYER1;
  initialize_board();
}

void TicTacToe::print() {
  for (int row = 0; row < 3; row++) {
    std::cout << "----------" << std::endl;
    for (int col = 0; col < 3;  col++) {
      std::cout << as_symbol(board[row][col]) << "|";
    }
    std::cout << std::endl;
  }
}

void TicTacToe::initialize_board() {
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 3; col++) {
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
