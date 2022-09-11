#include <iostream>
using namespace std;

int main() {
    cout << "Type Casting" << endl;
    int x = 10;
    int y = 3;
    cout << (float)x / y << endl;

    int a = 343;
    cout << (float)a / 34 << endl;
    cout << a / 34 << endl;

    float b = 873.234;
    cout << (int)b << endl;
    
    return 0;
}