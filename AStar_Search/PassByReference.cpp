/**
 * In all of the functions you've written so far,
 * the objects returned by the function are different from the objects provided to the function.
 * In other words, when the function is called on some data,
 * a copy of that data is made, and the function operates on a copy of the data instead of the original data.
 * This is referred to as pass by value,
 * since only a copy of the values of an object are passed to the function, and not the actual objects itself.
 */

// Passing Values
#include <iostream>
using std::cout;


int MultiplyByTwo(int i) {
    i = 2*i;
    return i;
}

int main() {
    int a = 5;
    cout << "The int a equals: " << a << "\n"; // => The int a equals: 5
    int b = MultiplyByTwo(a);
    cout << "The int b equals: " << b << "\n"; // => The int b equals: 10
    cout << "The int a still equals: " << a << "\n"; // => The int a still equals: 5
}

/** Passing Reference
 * It is possible to modify a from within the function. 
 * To do this, you must pass a reference to the variable a, instead of the value of a. 
 * In C++, a reference is just an alternative name for the same variable.
 * To pass by reference, you simply need to add an ampersand & before the variable in the function declaration.
 */

#include <iostream>
using std::cout;


int MultiplyByTwo(int &i) {
    i = 2*i;
    return i;
}

int main() {
    int a = 5;
    cout << "The int a equals: " << a << "\n"; // => the int a equals: 5
    int b = MultiplyByTwo(a);
    cout << "The int b equals: " << b << "\n"; // => the int b equals: 10
    cout << "The int a now equals: " << a << "\n"; // => the int now equals: 10
}
