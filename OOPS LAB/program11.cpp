// Write a C++ program to create a class called EXPRESSION. Using appropriate member
// functions accept a valid arithmetic expression. Evaluate the expression and divide the result
// by another variable ‘d’. throw an exception “divide by zero” if the value of d=0. Call a read
// function to read the ‘d’ value again. Rethrow the exception if d still contains 0.
#include <iostream>
using namespace std;
class EXCEPTION
{
    int a;
    int b;
    int d;

public:
    void insert()
    {
        cout << "enter value for a b d\n";
        cin >> a >> b >> d;
    }
    void din()
    {
        cout << "please insert the value for d again\n";
        cin >> d;
    }
    void check()
    {
        char a;
        cout << " +=s\n -=d\n *=m\n";
        cin >> a;
        if (a == 's')
        {
            try
            {
                sum();
            }
            catch (int b)
            {
                cout << "you have entered 0 twice hence we cannot allow you to proceed further as you had 2 chances to survive and died\n";
            }

            // sum();
        }
        else if (a == 'd')
        {
            try
            {
                diff();
            }
            catch (int b)
            {
                cout << "you have entered 0 twice hence we cannot allow you to proceed further as you had 2 chances to survive and died\n";
            }

            // diff();
        }
        else if (a == 'm')
        {
            try
            {
                mul();
            }
            catch (int b)
            {
                cout << "you have entered 0 twice hence we cannot allow you to proceed further as you had 2 chances to survive and died\n";
            }

            // mul();
        }
    }
    void sum()
    {
        int temp;
        temp = a + b;
        try
        {
            if (d == 0)
                throw 1;
            else
                cout << "divided you get-->" << (float)temp / d << endl;
        }
        catch (int a)
        {
            cout << "error divide by zero\n";
            din();
            if (d == 0)
                throw;
        }
    }
    void diff()
    {
        int temp;
        temp = a - b;
        try
        {
            if (d == 0)
                throw 1;
            else
                cout << "divided you get-->" << (float)temp / d << endl;
        }
        catch (int a)
        {
            cout << "error divide by zero\n";
            din();
            if (d == 0)
                throw;
        }
    }
    void mul()
    {
        int temp = a * b;
        try
        {
            if (d == 0)
                throw 1;
            else
                cout << "divided you get-->" << (float)temp / d << endl;
        }
        catch (int a)
        {
            cout << "error divide by zero\n";
            din();
            if (d == 0)
                throw;
        }
    }
};
int main()
{
    EXCEPTION arpan;
    arpan.insert();
    arpan.check();
    return 0;
}