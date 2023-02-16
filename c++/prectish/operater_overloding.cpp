#include<iostream>
using namespace std;
class demo
{
    public:
        int a, b;
        demo()
        {
            a = 0;
            b = 0;
    }
    demo(int x,int y)
    {
        a = x;
        b = y;
    }
    void showdeta()
    {
        cout << "value of a : " << a << endl;
        cout << "value of b : " << b << endl;
    }
    damo operator++(int)
    {
        a += 20;
        b += 20;
    }
     
     
};
int main ()
{
    demo.d1(20, 30) d2;
    d1.showdata();
    d1++;
    d1.showdata();
    d2++;
    d2.showdata();
    return 0;
}