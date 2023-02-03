#include <iostream>
using namespace std;
// Write a program to find the multiplication values and the cubic values using inline function

class inlinef
{
public:
    int multiplication(int a, int b)
    {
        int multiplication = 0;

        multiplication = a * b;
        return multiplication;
    }
    int cube(float a)
    {
        int cube;

        cube = a * a * a;
        return cube;
    }
};

int main()
{
    int a, b;
    int cube_answer, mul_ans;
    inlinef i1, i2;
    cout << "enter valeu of a : ";
    cin >> a;
    cout << "enter valeu of b : ";
    cin >> b;
    cube_answer = i1.cube(a);
    mul_ans = i1.multiplication(a,b);
    cout << "Multiplication = " << mul_ans << endl;
    cout << " Cube = " << cube_answer << endl;
    return 0;
}