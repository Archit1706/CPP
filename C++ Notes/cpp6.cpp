#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "If-else Statements" << endl;
    cout << "Enter your age: " << endl;
    cin >> age;

    if (age > 18 && age < 120) {
        cout << "You can vote!" << endl;
    }
    else if (age <= 1 && age >= 120) {
        cout << "Invalid Age!" << endl;
    }
    else {
        cout << "You cannot vote!" << endl;
    }

    
    return 0;
}