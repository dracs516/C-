// Design a Ship class with member variables name and year with constructors and appropriate
// accessors and mutators.
// - Virtual print function that displays the ship’s name and the year it was built.
// - Design a CruiseShip class that is derived from the Ship class. The CruiseShip class
// should have the following members
// a variable for the maximum number of passengers
// and appropriate accessors, mutators and constructor. A print function that overrides the
// print function in the base class. The CruiseShip class’s print function should display
// only the ship’s name and the maximum number of passengers.
// - Design a CargoShip class that is derived from the Ship class. The CargoShip class
// should have the following members: a member variable for the cargo capacity,
// constructor, accessors and mutators. A print function that overrides the print function in
// the base class. The CargoShip class’s print function should display only the ship’s

// name and the ship’s cargo capacity. Demonstrate the classes in a program that has an
// array of Ship pointers. The array elements should be initialized with the addresses of
// dynamically allocated Ship. The program should then step through the array, calling each
// object’s print function.
#include <iostream>
using namespace std;
class ship
{
    string name;
    int year;

public:
    ship()
    {
        setdata();
        // getdata();
    }
    void setdata()
    {
        cout << "please enter the name of the ship\n";
        cin >> name;
        cout << "please enter the year in which it was built\n";
        cin >> year;
    }
    void getdata()
    {
        cout << this->name << endl;
        // cout << this->year << endl;
    }
    virtual void print()
    {
        cout << this->name << endl;
        cout << this->year << endl;
    }
};
class cruisship : virtual public ship
{
    int cap;

public:
    cruisship()
    {
        setdata();
        // getdata();
    }
    void setdata()
    {
        cout << "please enter the capacity of the ship\n";
        cin >> cap;
    }
    void getdata()
    {
        cout << this->cap << endl;
    }
    void print()
    {
        cout << this->cap << endl;
        ship::getdata();
    }
};
class cargo : virtual public ship
{
    int cap1;

public:
    cargo()
    {
        setdata();
        // getdata();
    }
    void setdata()
    {
        cout << "please enter the capacity of the ship\n";
        cin >> cap1;
    }
    void getdata()
    {
        cout << this->cap1 << endl;
    }
    void print()
    {
        cout << this->cap1 << endl;
        ship::getdata();
    }
};
int main()
{
    ship *ar[2];
    cruisship a;
    cargo b;
    ar[0] = &a;
    ar[1] = &b;
    ar[0]->print();
    ar[1]->print();
    return 0;
}