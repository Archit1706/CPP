#include <iostream>
using namespace std;

int main() {
    cout << "Pointer Arithmetic" << endl;

    // consider if marks = {32, 99, 34, 78}
    //          index ---->  0   1   2   3
    // marks => stores the address of first block
    // &marks => it will give an error

    // now if p = marks;
    // then *(p) = 32
        // *(p + 1) = 99
        // *(p + 2) = 34
        // *(p + 3) = 78
    
    int marks[10] = {32, 99, 34, 78};
    int* p = marks;

    cout << "" << endl;
    cout << "marks stores the address of the first block: " << marks << endl;
    cout << "Address of marks[0]: " << &marks[0] << endl;
    cout << "Pointer pointing to marks: " << p << endl;
    cout << "" << endl;
    cout << "First Element: " << *p << endl;
    cout << "Second Element: " << *(p + 1) << endl;
    cout << "Third Element: " << *(p + 2) << endl;
    cout << "Fourth Element: " << *(p + 3) << endl;
    cout << "" << endl;

    cout << "Pointer Arithmetic" << endl;
    cout << "AddressNew = AddressCurrent + i * sizeof(data_type)" << endl;
    return 0;
}