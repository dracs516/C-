// Write
// a program that reads from a file which contains real numbers and displays
// the minimum, maximum and average of the numbers in the
// file. The user should be able to enter the name of the input file from the
// keyboard.
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main()
{
    string ar;
    string name;
    cin >> name;
    ifstream read(name);
    getline(read, ar);
    stringstream one(ar);
    int x = 0;
    one >> x;
    // cout<<x;
    int avg = x;
    int min = 0;
    int max = 0;
    int n = 1;

    while (read.eof() == 0)
    {
        getline(read, ar);
        stringstream reed(ar);
        int y = 0;
        reed >> y;
        if (x >= y)
        {
            max = x;
        }
        else
        {
            max = y;
            x = y;
        }
        avg = avg + y;
        n++;
    }
    read.close();
    cout << max << endl;
    cout << avg / n << endl;
    ifstream read1(name);
    string po;
    getline(read1, po);
    stringstream rid(po);
    int l = 0;
    rid >> l;
    // int min=0;
    while (read1.eof() == 0)
    {
        getline(read1, po);
        stringstream rid(po);
        // int l=0;
        int j = 0;
        rid >> j;
        if (l <= j)
        {
            min = l;
        }
        else
        {
            min = j;
            l = j;
        }
    }
    read1.close();
    cout << min << endl;
    return 0;
}