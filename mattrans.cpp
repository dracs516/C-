#include <iostream>
using namespace std;
class MATRIX
{
    int a[10][10];
    int row, col;

public:
    MATRIX(int x, int y)
    {
        row = x;
        col = y;
    }
    void read();
    void display();
    void transpose();
};
void MATRIX::read()
{
    cout << "Enter elements of matrix :\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cin >> a[i][j];
    }
}
void MATRIX::display()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}
void MATRIX::transpose()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << a[j][i] << " ";
        cout << "\n";
    }
}
int main()
{
    int m, n;
    cout << "Enter order of matrix :";
    cin >> m >> n;
    MATRIX obj1(m, n);
    obj1.read();
    cout << "Matrix is…\n";
    obj1.display();
    cout << "Transpose of matrix is…\n";
    obj1.transpose();
}