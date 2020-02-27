#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {

  // Linear sequence of contiguously allocated memory
  vector<int> v1{0, 1, 2};
  vector<int> v2 = {3, 4, 5};
  vector<int> v3;
  v3 = {6, 7, 8};
  cout << "1d initial ok"
       << "\n";
  cout << v1[2] << "\n";
  cout << v2[0] << "\n";
  cout << v3[1] << "\n";


  vector<vector<int>> v2d{{1, 2}, {7, 8}};
  cout << "2d initial ok"
       << "\n";
  cout << v2d[1][1] << "\n";
}
