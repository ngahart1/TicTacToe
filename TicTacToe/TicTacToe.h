class TicTacToe {
 public:
  TicTacToe();
  int getStatus();
  int getTurn();
  int makeMove();
 private:
  int turn; //the player whose turn it is
  int status;
  int board[3][3];
}
