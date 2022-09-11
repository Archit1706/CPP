#include <iostream>
using namespace std;

int main() {
    cout << "Arrays" << endl;
    // It is a collection of items of similar type stored in contiguous memory locations
    // Array indexing starts from 0 to n
    // Arrays are of fixed size
    cout << "" << endl;
    // declaring an array with a size but not initializing it with values
    int a[10];

    // then the array is loaded with some garbage values
    cout << a[0] << endl;
    cout << a[1] << endl;

    cout << "" << endl;
    
    // Declaring an array with size and values and accessing any index
    int b[5] = {1, 2, 3, 4, 5};
    cout << b[4] << endl;
    
    int c[4] = {23, 45, 67, 89};
    cout << c << endl;
    cout << c[0] << endl;
    cout << c[1] << endl;
    cout << c[2] << endl;
    cout << c[3] << endl;

    cout << "" << endl;

    // Program to display total and store marks

    // int marks[6];

    // cout << "Enter marks in 6 subjects: " << endl;
    // for (int i = 0; i < 6; i++)
    // {
    //     cin >> marks[i];
    // }
    // int total = 0;
    
    // for loop 

    // for (int i = 0; i < 6; i++)
    // {
    //     cout << "Marks" << i+1 << ": " << marks[i] << endl;
    //     total += marks[i];
    // }

    // while loop

    // int i = 0;
    // while (i < 6) {
    //     cout << "Marks" << i+1 << ": " << marks[i] << endl;
    //     total += marks[i];
    //     i++;
    // }

    // do while loop

    // do {
    //     cout << "Marks" << i+1 << ": " << marks[i] << endl;
    //     total += marks[i];
    //     i++;
    // } while (i < 6);

    // cout << "Total Marks = " << total << endl;

    cout << "" << endl;

    cout << "Two Dimensional Arrays" << endl;

    // basic 2-d array declaration
    // 2 rows and 3 columns
    int arr2d[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr2d[i][j] << endl;
    //     }
    //     cout << endl;
    // }
    
    // int rows, cols, arrMulti[50][50];

    // cout << "Enter the number of rows: " << endl;
    // cin >> rows;
    // cout << "Enter te number of columns: " << endl;
    // cin >> cols;

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << "Enter the element at row-" << i << " and column-" << j << " : ";
    //         cin >> arrMulti[i][j];
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << "The element at row-" << i << " and column-" << j << " is: " ;
    //         cout << arrMulti[i][j] << endl;
    //     }
    //     cout << endl;
    // }

    // // array size
    // cout << sizeof(marks) << endl;
    // cout << sizeof(arr2d) << endl;
    // cout << sizeof(arrMulti) << endl;



    return 0;
}