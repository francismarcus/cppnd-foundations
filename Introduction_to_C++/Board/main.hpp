#ifndef main_h
#define main_h

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

enum class State { kEmpty, kObstacle };

vector<vector<State>> ReadBoardFile(string path);
void PrintBoard(vector<vector<State>> v);
vector<State> ParseLine(string s);
string CellString(State cell);

#endif /* main_h */