#include<iostream>
using namespace std;
class demo             //  copy constructor 
{
    public:
        int x, y;
        demo()
        {
            int l = 0;
            cout << "l =" << l;
        }
        demo(demo&obj1)
        {
            x = obj1.x;
            y = obj1.y;
        }
    
           
        
        void printvalue()
        {
            cout << "X =" << x << endl;
            cout << "Y =" << y << endl;
        }
        
};

int main ()
{
        demo d1;
        d1. x = 50;
        d1.y = 100;
        demo d2 = d1;
        // demo d1;
        // d1.x = 10;
        // d1.y = 20;
         demo d3 = d1;

        d1.printvalue();
        d2.printvalue();
        d3.printvalue();


        return 0;
}