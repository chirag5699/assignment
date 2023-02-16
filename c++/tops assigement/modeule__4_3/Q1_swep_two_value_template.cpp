#include <iostream>
using namespace std;
// Write a program of to swap the two values using templates
template <class t>
void swapN(t &a, t &b)
{
    t temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x, y;
    cout << "Enter value  X = \n";
    cin >> x;
    cout << "Enter value Y = \n";
    cin >> y;
    swap(x, y);
    cout << "x = " << x << "\n"
         << "y = " << y;
    return 0;
}