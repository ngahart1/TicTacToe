#include <fstream>
#include <math.h>
#include "initialize.h"

void initialize() {
  
  std::ofstream clear("board_positions.txt");
  clear << "";
  clear.close();
  
  std::ofstream out;
  out.open("board_positions.txt", std::ios_base::app);
  
  int side_length = 3;
  
  //consider the problem of all possible choices as simply a base conversion problem
  
  for (int base10 = 0; base10 < pow(3, side_length*side_length); base10++) {
    //we know the maximum number is 3^9 - 1
    int num = base10;
    for (int power = side_length*side_length - 1; power >= 0; power--) {
      out << to_symbol(num / (int)pow(3, power));
      num = num % (int)pow(3, power);
    }
    out << " 0 0" << std::endl;
  }
  out.close();
}

char to_symbol(int x) {
  //x is 0,1,or 2,
  if (x == 0) {return '_';}
  if (x == 1) {return 'X';}
  if (x == 2) {return 'O';}
}
    
