#include <iostream>
using namespace std;
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int sub(int a, int b) {
    return (add(a, -b));
}

int main() {
    cout << "Functions" << endl;
    int a, b;

    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number: " << endl;
    cin >> b;
    cout << "Sum is: " << add(a, b) << endl;
    cout << "Difference is: " << sub(a, b) << endl;
    
    return 0;
}

