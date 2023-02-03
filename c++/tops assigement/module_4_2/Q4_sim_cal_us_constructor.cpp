#include <iostream>
#include <iomanip>
#include<stdio.h>
using namespace std;
// Write a program of Addition, Subtraction, Division, Multiplication using constructor
class calculeter
{
public:
    calculeter()
    {
        int a = 0;
        int b = 0;
        cout << "print void valau of a & b : " << a << b << endl;
    }
    calculeter(int a, int b)
    {
        int addition;
        cout << "adddition\n";
        cout << "Enter valeu a & b : ";
        cin >> a >> b;
        addition = a + b;
        cout << " addition is == " << addition;
    }
    calculeter(int c, int d, int e)
    {
        int Subtraction;
        cout << "Subtraction\n";
        cout << "Enter valeu c & d & e: ";
        cin >> c >> d >> e;
        Subtraction = c - d - e;
        cout << "Subtraction is == " << Subtraction;
    }
    calculeter(int f, int g, int h, int i)
    {
        int Multiplication;
        cout << "Multiplication\n";
        cout << " enter valeu of f & g & h & i: ";
        cin >> f >> g >> h >> i;
        Multiplication = f * g * h * i;
        cout << "Multiplication is " << Multiplication;
    }
    calculeter(float j, float k, float l, float m, float n)
    {
        float Division;
        cout << "Division\n";
        cout << "enter valeu of i & j & k  & l & m :";
        cin >> j >> k >> l >> m >> n;
        Division = j / k / l / m / n;
        cout << "division is : " << setprecision(2) << Division << endl;
        printf("division is %.2f", Division);
    }
};

int main()
{
    // object
    int a, b,c ,d,e;
    calculeter c1;
    calculeter c3( a, b,c,d,e );

    return 0;
}