#include <iostream>
using std::cout;

// Function declared and defined here.
int AdditionFunction(int i, int j) { return i + j; }

int main() {
  auto d = 3;
  auto f = 7;
  cout << AdditionFunction(d, f) << "\n";
}

/* */
#include <iostream>
#include <string>
using std::cout;
using std::string;

// Write the PrintStrings function here.
void PrintStrings(string a, string b) { cout << a << " " << b << "\n"; }

int main() {
  string s1 = "C++ is";
  string s2 = "super awesome.";

  // Uncomment the following line to call your function:
  PrintStrings(s1, s2);
}

/* */
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// Define a function "AdditionFunction" here.
// Instead of just two ints, this function should accept a vector<int>
// as the argument, and it should return the sum of all the ints in the vector.

int AdditionFunction(vector<int> v) {
  int sum = 0;
  for (int num : v) {
    sum += num;
  }

  return sum;
}

int main() {
  vector<int> v{1, 2, 3};

  // Uncomment the following line to call your function:
  cout << AdditionFunction(v) << "\n";
}