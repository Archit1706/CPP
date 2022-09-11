#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp) {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    void printDetails() {
        cout << "Name of our employee is: " << this->name << endl;
        cout << "Salary of our employee is: " << this->salary << endl;
    }

    void getSecretPassword() {
        cout << "The secret password of employee is: " << this->secretPassword << endl;
    }

private:
    int secretPassword;
};

class Programmer : public Employee {

    public:
        int errors;

};
int main() {
    cout << "Inheritance" << endl;
    
    Programmer archit;
    

    return 0;
}