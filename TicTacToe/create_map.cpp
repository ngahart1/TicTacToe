#include <fstream>
#include <map>
#include <pair>
#include <string>
#include "create_map.h"

board_map create_map () {
  //fair assumption that file is in board_positions.txt
  ifstream in ("board_positions.txt");
  std::string line;
  board_map b;
  while (getline(in, line)) {
    std::string board = line.substr(0,9);
    int wins = line.at(10);
    int losses = line.at(12);
    b[board] = std::make_pair(wins,losses);
  }
  return b;
}
  
