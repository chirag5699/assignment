#include <iostream>
using namespace std;
class areaofsquar
{
public:

    areaofsquar()
    {
        int a = 0;
        cout << "a is " << a;
    }
    areaofsquar(int c)
    {
        float area;
        //    cout << "enter value of c";
        //    cin >> c;
        area = 3.14 * c * c;
        cout << "\narea of aqure : " << area;
    }

    areaofsquar(int a, int b)
    {
        //int a, b;
        float area;

        // cout << "enter value of a";

        // cin >> a;
        // cout << "enter value of b";
        // cin >> b;
        area = 3.14 *a * b;
        cout << "\narea of carcle : " << area;
    }
};

int main()
{
    areaofsquar s;
    areaofsquar s1(3.15);
    areaofsquar s2(6.32,8.33);
    return 0;
}
