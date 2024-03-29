enum game_status {PLAYER1, PLAYER2, DRAW, KEEP_PLAYING};
enum player_type {HUMAN, COMPUTER};


class TicTacToe {
 public:
 
  TicTacToe();
  TicTacToe(int, int);
  int play();
  int getStatus();
  int makeMove();
  void print();
  void initialize_board();

 private:
  int status;
  int board[3][3];
  char as_symbol(int);
  int whose_turn;
  //Player p1, p2;
};
