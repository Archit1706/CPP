#include <iostream>
using namespace std;

int main() {
    cout << "Pointers" << endl;

    // What is pointers: data type which holds the adress of other data types
    // Notations: 
    //  & => Address of operator
    //  * => Dereference Operator

    // basic variable
    int a = 34;
    // pointer to a variable
    int* b;
    // pointer to a pointer
    int** c;
    b = &a;
    c = &b;
    cout << "Pointer Status: a <- b <- c" << endl;
    cout << endl;
    cout << "The value of a is: " << a << endl;
    cout << "The value of a is: " << *b << endl;
    cout << "The value of a is: " << *b << endl;
    cout << endl;
    cout << "The memory address of a is: "<< b << endl;
    cout << "The memory address of a is: "<< &a << endl;
    cout << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The value of b is: " << &a << endl;
    cout << endl;
    cout << "The memory address of b is: "<< c << endl;
    cout << "The memory address of b is: "<< &b << endl;
    cout << endl;
    cout << "The value of c is: " << c << endl;
    cout << endl;
    cout << "The memory address of c is: " << &c << endl;
    cout << endl;

    return 0;
}