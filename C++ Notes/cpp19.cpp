#include <iostream>
using namespace std;

class Employee
{
    // public class can be accessed from anywhere
public:
    string name;
    int salary;

    // Constructor
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


    // private class variables can be accessed only within the class
private:
    int secretPassword;
    // protected is similar to private. The cannot be accessed from outside the class but can be accessed by its sub classes.
};

class Room {
    public:
    double length;
    double breadth;
    double height;

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

class Room2 {
    private:
    double length;
    double breadth;
    double height;

    public:
    void initData(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};


int main()
{
    cout << "Object Oriented Programming: Objects, Classes, Access Modifiers, Constructors, Destructors" << endl;
    // Employee archit;
    // archit.name = "Archit";
    // archit.salary = 100000;
    // archit.printDetails();

    Employee rathod("Archit Rathod", 329843, 3);
    
    // cout << rathod.secretPassword; // it is not accessible because it is private
    rathod.printDetails();
    rathod.getSecretPassword();

    Room room1;
    room1.length = 12.23;
    room1.breadth = 23.42;
    room1.height = 11;

    cout << "Area of the room = " << room1.calculateArea() << endl;
    cout << "Volume of the room = " << room1.calculateVolume() << endl;

    Room2 room;
    room.initData(23.31, 12.53, 53.23);
    cout << "Area of the room = " << room.calculateArea() << endl;
    cout << "Volume of the room = " << room.calculateVolume() << endl;
    return 0;
}