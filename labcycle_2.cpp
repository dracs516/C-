#include <iostream>
using namespace std;

class student
{
    // char usn;
    char usn[10];
    float test1;
    float test2;
    float test3;

public:
    void getdata();
    void avg_marks();
    void display();
};

void student ::getdata()
{
    cout << "\nTest 1: ";
    cin >> test1;
    cout << "\nTest 2: ";
    cin >> test2;
    cout << "\nTest 3: ";
    cin >> test3;
    cout << "------------------------------------------------------\n";
}

void student::display()
{
    cout << "Test 1: " << test1 << endl;
    cout << "Test 2: " << test2 << endl;
    cout << "Test 3: " << test3 << endl;
    cout << "------------------------------------------------------\n";
}

void student ::avg_marks()
{
    if (test1 >= test2 && test1 >= test3)
    {
        if (test2 >= test3)
        {
            cout << (test1 + test2) / 2 << endl;
        }
        else if (test3 >= test2)
        {
            cout << (test1 + test3) / 2 << endl;
        }
    }

    if (test2 >= test1 && test2 >= test3)
    {
        if (test1 >= test3)
        {
            cout << (test2 + test1) / 2 << endl;
        }
        else if (test3 >= test1)
        {
            cout << (test2 + test3) / 2 << endl;
        }
    }

    if (test3 >= test1 && test3 >= test1)
    {
        if (test1 >= test2)
        {
            cout << (test3 + test1) / 2 << endl;
        }
        else if (test2 >= test1)
        {
            cout << (test3 + test2) / 2 << endl;
        }
    }
}

int main()
{
    student sub[6];
    char usn[10];
    cout << "Enter the USN of the student: ";
    cin >> usn;
    for (int i = 0; i < 6; i++)
    {
        cout << "------------------------------------------------------\n";
        cout << "\nEnter the marks for subject " << i + 1 << ": " << endl;
        sub[i].getdata();
    }

    for (int i = 0; i < 6; i++)
    {
        cout << "------------------------------------------------------\n";
        cout << "The marks of the student with USN " << usn << " in subject " << i + 1 << " is :\n";
        sub[i].display();
    }

    for (int i = 0; i < 6; i++)
    {
        cout << "------------------------------------------------------\n";
        cout << "The average marks for subject " << i + 1 << " in all three tests is: ";
        sub[i].avg_marks();
        cout << endl;
        cout << "------------------------------------------------------\n";
    }

    cout << endl;
    return 0;
}