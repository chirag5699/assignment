#include <iostream>
using namespace std;
class A // parent calss
{
public:
    int a, b;
    void showdata()
    {
        cout << "enter A  & B : ";
        cin >> a >> b;
        cout << "A = " << a << "b = " << b << endl;
    }
};
class B : public A   // child class
{
public:
    int x, y;
    void displaydata()
    {
        cout << "enter x  & y : ";
        cin >> x >> y;
        cout << "X = " << x << "Y = " << y << endl;
    }
};
class C : public B   // child class
{
    protected:
    int m, n;
    void printdata()
    {
        cout << "enter M  & N : ";
        cin >> m >> n;
        cout << "M = " << m << "N = " << m << endl;
    }
};

int main()
{

    A a1, a2;
    B b1, b2;
    C c1;
    a1.showdata();
    b1.displaydata();   
    b1.showdata();     // class B add class A
    c1.showdata();
    c1.displaydata();
    c1.printdata();

    return 0;
}
