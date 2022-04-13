#include <iostream>
using namespace std;
class ta
{
    string name;
    int id;

public:
    ta()
    {
    }
    ta(string name, int id)
    {
        this->name = name;
        this->id = id;
        cout << "<-------------------TEACHER'S ASSISTANT'S DETAILS------------------>\n";
        cout << name << endl;
        cout << id << endl;
    }
};
class fac : virtual public ta
{
    string f;

public:
    fac(string name, int id, string f) : ta(name, id)
    {
        this->f = f;
        cout << f << endl;
    }
};
class student : public ta
{
    int stcount;

public:
    student(string name, int id, int stcount) : ta(name, id)
    {
        this->stcount = stcount;
        cout << "student count: " << stcount << endl;
    }
};
class person : public student, public fac
{
    string deg;
    int exp;

public:
    person(string name, int id, string f, int stcount, string deg, int exp) : student(name, id, stcount), fac(name, id, f)
    {
        this->deg = deg;
        this->exp = exp;
        cout << deg << endl;
        cout << exp << endl;
    }
};
int main()
{
    person yogesh("yogesh N", 12889, "object oriented prog", 63, "Masters pass", 12);
    return 0;
}