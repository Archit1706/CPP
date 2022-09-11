#include <iostream>
using namespace std;

int main() {
    // Variables and datatypes


    // type modifiers => short, long, signed, unsigned
    int a, b, c;
    short s = 9;
    long d;
    long long e;
    float score = 43.32;
    double score1 = 45.232;
    long double score2 = 45.59250;
    char alphabet = 'a';
    bool hello = true;
    string text = "Archit";

    // constant variables
    float const cga = 10.00;
    // cga = 9; cannot modify a constant variable



    cout << score << endl;
    cout << score1 << endl;
    cout << score2 << endl;
    cout << s << endl;

    // camelCase Notation 
    // Identifiers
    int marksInMaths = 89;
    cout << marksInMaths;

    // Size of basic data types
    cout << "boolean (bool) = 1 byte" << endl;
    cout << "character (char) = 1 byte" << endl;
    cout << "integer (int) = 2 or 4 bytes" << endl;
    cout << "floating-point (float) = 4 bytes" << endl;
    cout << "double floating-point (double) = 8 bytes" << endl;
    cout << "empty (void) = 0" << endl;
    cout << "wide character (wchar_t) = 2 bytes" << endl;

    // characters and ASCII
    char A = 65, B = 66, C = 67;

    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    
    // String operations
    cout << text << endl;
    string fname = "Archit";
    string lname = "Rathod";
    // string concatenation
    string fullName = fname + lname;
    cout << fullName << endl;
    // append
    fullName = fullName.append("Virendra");
    cout << fullName << endl;
    // length
    string txt = "fldskajfkljasd";
    cout << "Length = " << txt.length() << endl;
    cout << "Length = " << txt.size() << endl;
    // access string and modify
    string name = "archit";
    cout << name[0] << endl;
    cout << name[5] << endl;
    string tp = "hello";
    cout << tp << endl;
    tp[0] = 'J';
    cout << tp << endl;
    // substring
    cout << name.substr(0, 3) << endl;
    cout << name.substr(1, 5) << endl;




    return 0;
}