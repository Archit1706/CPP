// --------------- Functions -------------------------- // 
#include <iostream>
using namespace std;

int main() {
    // prime nos between a and b
    int a, b;
    cout << "Enter the lower number: " << endl;
    cin >> a;
    cout << "Enter the higher number: " << endl;
    cin >> b;

    cout << "Prime numbers between " << a << " and " << b << " are: ";
    for (int i = a; i <= b; i++)
    {
        for (int j = 2; j < i / 2; j++)
        {
            if (i % j != 0){
                break;
            }
        }
        cout << i;
    }
    
    
    return 0;
}