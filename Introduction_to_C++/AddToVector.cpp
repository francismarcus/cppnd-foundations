#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {

  vector v{1, 2, 3}; // works only on c++17 without vector type

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << "\n";
  }

  // Push 4 to the back of the vector
  v.push_back(4);

  // Print the contents again
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << "\n";
  }
}