// 10. a) Write a C++ program to implement an array using class templates. Implement the
// following operations: Adding two arrays, finding the max and min in an array.
// b) Write a program to sort using bubble sort by applying function templates.
#include <iostream>
#include <stdio.h>
using namespace std;
#define row 2
#define col 2
template <class t>
class a
{
    t arr[row][col];

public:
    a operator*(a &obj1)
    {
        a temp;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                temp.arr[i][j] = arr[i][j] * obj1.arr[i][j];
            }
        }
        return temp;
    }
    t min()
    {
        t arp = arr[0][0];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                arp = (arp <= arr[i][j]) ? arp : arr[i][j];
            }
        }
        return arp;
    }
    t max()
    {
        t arp = arr[0][0];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                arp = (arp >= arr[i][j]) ? arp : arr[i][j];
            }
        }
        return arp;
    }
    void print()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%d   ", arr[i][j]);
            }
            printf("\n");
        }
    }
    void insert()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("please enter the data you want to input in the matrix\n");
                cin >> arr[i][j];
            }
            printf("\n");
        }
    }
};
template <class t>
void bubble(t arr[], int n)
{
    t temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << "        ";
    }
}
int main()
{
    a<int> arpa;
    a<int> moin;
    arpa.insert();
    moin.insert();
    cout << arpa.min();
    cout << moin.max() << endl;
    a<int> mul;
    mul = arpa * moin;
    mul.print();
    int abc[] = {6, 3, 5, 4, 2, 1};
    bubble(abc, 6);
    return 0;
}
