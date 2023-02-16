#include <iostream>
using namespace std;
// Write a program to find the max number from given two numbers using friend function
class B; // only decleretion class
class A

{
public:
    int a;
    A()
    {
        cout << "Enter first number : \n";
        cin >> a;
    }
    friend void max(A, B);
};
class B
{
public:
    int b;
    B()
    {
        cout << "Enter second number : \n";
        cin >> b;
    }
    friend void max(A, B);
};

void max(A x, B y)
{
    if (x.a > y.b)
    {
        cout << "A namber is largest :" << x.a << endl;
    }
    else
    {
        cout << "B namber is largest :" << y.b << endl;
    }
}

int main()
{
    cout << "find max number from given number : \n";
    A x;
    B y;
    max(x, y);
}