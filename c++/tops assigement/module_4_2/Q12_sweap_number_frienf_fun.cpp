#include <iostream>
using namespace std;
// Write a program to swap the two numbers using friend function without using third variable
class sweap
{
public:
    int a, b;
    void input()
    {
        cout << "Enter two number to swep  : \n";
        cout << "Enter value  A : \n";
        cin >> a;
        cout << "Enter value  B : \n";
        cin >> b;
        cout << "befour swipping :  \n";
        // cout << "A = " << a << endl;
        // cout << "B = " << b << endl;
        cout << "A= " << a << " B = " << b << endl;
    }
    void output()
    {
        cout << "After swiping :  \n";
        cout << "A= " << a << " B = " << b << endl;
        // cout << "A = " << a << endl;
        // cout << "B = " << b << endl;
    }
    friend void swepno(sweap &s);
};

void swepno(sweap &sw)
{
    sw.a = sw.a + sw.b;
    sw.b = sw.a - sw.b;
    sw.a = sw.a - sw.b;
}
int main()
{
    sweap sw;
    sw.input();
    swepno(sw);
    sw.output();

    return 0;
}