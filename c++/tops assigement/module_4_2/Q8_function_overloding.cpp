#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
// Write a program of Addition, Subtraction, Division, Multiplication using constructor
class calculeter
{
public:
    calculeter()

    {
        cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
        int a = 0;
        int b = 0;
        cout << "print void valau of a & b : " << a << b << endl;
        cout << "defult constructar \n";
    }
    calculeter(int z)
    {
        cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
        cout << " value of Z : \n";
        cin >> z;
        cout << "Z = " << z << endl;
    }
    calculeter(int a, int b)
    {
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
        int addition;
        cout << "adddition\n";
        cout << "Enter valeu two a & b : ";
        cin >> a >> b;
        addition = a + b;
        cout << " addition is == " << addition;
    }
    calculeter(int c, int d, int e)
    {
        cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
        int Subtraction;
        cout << "\nSubtraction";
        cout << "Enter  three valeu c & d & e: ";
        cin >> c >> d >> e;
        Subtraction = c - d - e;
        cout << "Subtraction is == " << Subtraction;
    }
    calculeter(int f, int g, int h, int i)
    {
        cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
        int Multiplication;
        cout << "\nMultiplication";
        cout << " enter four valeu of f & g & h & i: \n";
        cin >> f >> g >> h >> i;
        Multiplication = f * g * h * i;
        cout << "Multiplication is " << Multiplication;
    }
    calculeter(float j, float k, float l, float m, float n)
    {
        cout << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
        float Division;
        cout << "\nDivision";
        cout << "enter five valeu of i & j & k  & l & m :";
        cin >> j >> k >> l >> m >> n;
        Division = j / k / l / m / n;
        cout << "division is : " << fixed<< setprecision(2) << Division << endl;
       // printf("division is %.2f", Division);
    }
};

int main()
{
    // object
    int a, b, c, d, e;
    calculeter c1;
    calculeter c2(a);
    calculeter c3(a, b);
    calculeter c4(a, b, c);
    calculeter c5(a, b, c, d);
    calculeter c6(a, b, c, d, e);

    return 0;
}