#include <iostream>
using namespace std;

class complex
{

    int a, b;

public:
    void getdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void print()
    {
        cout << "The number is " << a << " + " << b << " i " << endl;
    }

    friend complex add(int, complex, complex);
    friend complex add(complex, complex, complex);
};

complex add(int x, complex o2, complex t1)
{

    t1.a = x + o2.a;
    t1.b = o2.b;
    t1.print();
}

complex add(complex o1, complex o2, complex t2)
{
    t2.a = o1.a + o2.a;
    t2.b = o1.b + o2.b;
    t2.print();
}

int main()
{
    complex s1, s2;
    complex t1, t2;

    s1.getdata(2, 5);
    s2.getdata(4, 10);
    cout << "----------------------------------" << endl;
    s1.print();
    cout << "----------------------------------" << endl;
    s2.print();
    cout << "----------------------------------" << endl;
    add(12, s2, t1);
    add(s1, s2, t2);
    return 0;
}