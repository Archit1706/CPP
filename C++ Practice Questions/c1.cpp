// ----------------------- Pattern Problems -------------------------- //

#include <iostream>
using namespace std;

int main() {


    // rectangle pattern
    // int rows, cols;
    // cout << "Enter the number of rows: " << endl;
    // cin >> rows;
    // cout << "Enter the number of columns: " << endl;
    // cin >> cols;

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << "" << endl;
    // }

    // hollow rectangle pattern
    // int rows, cols;
    // cout << "Enter the number of rows: " << endl;
    // cin >> rows;
    // cout << "Enter the number of columns: " << endl;
    // cin >> cols;

    // for (int i = 0; i < rows; i++)
    // {
    //     if (i == 0 || i == rows-1) {
    //         for (int j = 0; j < cols; j++)
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     else {
    //         cout << "* ";
    //         for (int k = 0; k < cols-2; k++)
    //         {
    //             cout << "  ";
    //         }
    //         cout << "* ";
    //     }
    //     cout << "" << endl;
    // }

    // Pyramid patterns
    int num;
    cout << "Enter the number/height: " << endl;
    cin >> num;
    
    // rigth slope pyramid

    // *
    // **
    // ***
    // ****

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << "" << endl;
    }

    cout << "" << endl;

    // left slope pyramid

    // |   *
    // |  **
    // | ***
    // |****

    for (int i = 0; i < num; i++)
    {
        for (int k = i; k < num - 1; k++)
        {
            cout << "  ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << "" << endl;
    }

    cout << "" << endl;

    // Full Pyramid

    // |      * 
    // |    * * *
    // |  * * * * *
    // |* * * * * * *

    for (int i = 0; i < num; i++)
    {
        for (int k = i; k < num - 1; k++)
        {
            cout << "  ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }

        for (int l = 1; l < i + 1; l++)
        {
            cout << "* ";
        }

        cout << "" << endl;
    }

    cout << "" << endl;

    // |    *
    // |   * *
    // |  * * *
    // | * * * *
    // |* * * * *

    for (int i = 0; i < num; i++)
    {
        for (int k = i; k < num - 1; k++)
        {
            cout << " ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }

        cout << "" << endl;
    }

    cout << "" << endl;

    // inverted half pyramids

    // Right Slope
    // ****
    // ***
    // **
    // *
    
    for (int i = 0; i < num; i++)
    {
        for (int j = num - i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << "" << endl;
    }

    cout << "" << endl;

    // Left Slope
    // |****
    // | ***
    // |  **
    // |   *
    
    for (int i = 0; i < num; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "  ";
        }
        
        for (int j = num - i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << "" << endl;
    }

    cout << "" << endl;


    // Inverted Pyramid
    // * * *
    //  * *
    //   *
    for (int i = 0; i < num; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }

        for (int j = num - i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << "" << endl;
    }

    cout << "" << endl;

    // |    *
    // |  * * *
    // |* * * * *

    for (int i = 0; i < num; i++)
    {
        for (int k = 0; k < num-i-1; k++)
        {
            cout << "  ";
        }

        for (int j = 0; j < 2*i + 1; j++)
        {
            cout << "* ";
        }
        cout << "" << endl;
    }

    // Diamond Pattern
    
    return 0;
}