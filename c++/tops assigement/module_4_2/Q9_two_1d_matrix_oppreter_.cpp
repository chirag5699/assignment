#include <iostream>
using namespace std;
// Write a Program of Two 1D Matrix Addition using Operator Overloading
class matrix
{
public:
    int num = 0;
    int arrey[20];
    matrix input()
    {
        cout << "Enter the size of matrix  :  \n";
        cin >> num;
        for (int i = 0; i < num; i++)
        {
            cout << "eliment :" << i + 1 << ":";
            cin >> arrey[i];
        }
    }
    matrix operator+(matrix m)
    {
        matrix addmatrix;
        for (int i = 0; i < num; i++)
        {
            addmatrix.arrey[i] = arrey[i] + m.arrey[i];
        }
        cout << "addition two matrix  is :   \n";
        for (int i = 0; i < num; i++)
        {
           cout << addmatrix.arrey[i] <<",";
        }
    }
    void output()
    {
        cout << "****************************\n";
        cout << " print matrix is : \n";
        for (int i = 0; i < num; i++)
        {
           cout << arrey[i] << ",";
        }
    }
};

int main()
{
    matrix addition;
    matrix m1,m2;
    cout << "first matrix : \n";
    m1.input();
    m1.output(); cout << endl;
    cout << "second matrix : \n";
    m2.input();
    m2.output();
    cout << endl;
    addition = m1+m2;
    return 0;
}