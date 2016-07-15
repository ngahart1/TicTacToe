#include <iostream>
#include "TicTacToe.h"

TicTacToe::TicTacToe() {
  status = KEEP_PLAYING;
  whose_turn = 1;
  initialize_board();
  //Player p1 (HUMAN);
  //Player p2 (HUMAN);
}

TicTacToe::TicTacToe(int p1_type, int p2_type) {
  status = KEEP_PLAYING;
  whose_turn = 1;
  initialize_board();
}

int TicTacToe::getStatus() {
  return status;
}

int TicTacToe::play() {
  while (status == KEEP_PLAYING) {
    status = makeMove();
    print();
  }
  return status;
}

int TicTacToe::makeMove() {
  std::cout << "Player " << whose_turn << ", what is your move?" << std::endl;
  int first, second;
  std::cin >> first >> second;
  board[first][second] = whose_turn;

  //check win in a row or column
  for (int r = 0; r < 3; r++) {
    if (board[r][0] == board[r][1] && board[r][0] == board[r][2] && board[r][1] == board[r][2]) {
      if (board[r][0] == 1) {return PLAYER1;}
      else {return PLAYER2;}
    }
    if (board[0][r] == board[1][r] && board[0][r] == board[2][r] && board[1][r] == board[2][r]) {
      if (board[0][r] == 1) {return PLAYER1;}
      else {return PLAYER2;}
    }
  }
  if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[1][1] == board[2][2]) {
    if (board[0][0] == 1) {return PLAYER1;}
    else {return  PLAYER2;}
  }
  if (board[2][0] == board[1][1] && board[2][0] == board[0][2] && board[1][1] == board[0][2]) {
    if (board[1][1] == 1) {return PLAYER1;}
    else {return PLAYER2;}
  }

  //at this stage, we know there is no winner, must check for draw
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 3; col++) {
      if (board[row][col] != 0) {
	return KEEP_PLAYING;
      }
    }
  }
}


void TicTacToe::print() {
  for (int row = 0; row < 3; row++) {
    std::cout << "------" << std::endl;
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
