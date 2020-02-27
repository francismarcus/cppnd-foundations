#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {

  vector<int> a = {0, 1, 2, 3, 4};
  cout << a[0];
  cout << a[1];
  cout << a[2];
  cout << "\n";

  // Getting a Vector's Length
  cout << a.size() << "\n";

  // 2D Vector Access
  vector<vector<int>> b = {{1, 1, 2, 3}, {2, 1, 2, 3}, {3, 1, 2, 3}};
  cout << b[2][1];
  cout << "\n";
  cout << b.size() << "x" << b[0].size() << "\n";
}