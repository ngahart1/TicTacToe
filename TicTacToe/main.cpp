#include <iostream>
#include "TicTacToe.h"

using namespace std;

int main () {
  cout << "Welcome to TicTacToe!" << endl;
  int p1_type, p2_type;
  /*cout << "Player 1, what is your type?" << endl;
  cin >> p1_type;
  cout << "p1_type is " << p1_type << endl;*/
  TicTacToe ttt;
  ttt.print();
  int final_result = ttt.play();
  if (final_result == PLAYER1) {
    cout << "Congratulations Player 1, you have won!" << endl;
  }
  else if (final_result == PLAYER2) {
    cout << "Congratulations Player 2, you have won!" << endl;
  }
  else if (final_result == DRAW) {
    cout << "Draw" << endl;
  }
  return 0;
}
