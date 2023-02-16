#include <iostream>
using namespace std;
//  Write a program to calculate the area of circle, rectangle and triangle using Function Overloading    Rectangle: Area * breadth    Triangle: ½ *Area* breadth   Circle: Pi * Area *Area

class calculat
{
public:
    float area, breadth;

    calculat()
    {
        cout << "Defult constructor \n";
    }
    calculat(float r)
    {

        cout << "------- Circle --------- \n ";
        cout << "Enter Radius  : ";
        cin >> r;
        float Circle = 3.14 * r * r;
        cout << "Circle = " << Circle << endl;
    }

    calculat(float area, float breadth)
    {
        cout << "enter area : \n";
        cin >> area;
        cout << "enter bteadth  :\n";
        cin >> breadth;
        cout << "------- Rectangle --------- \n ";
        float Rectangle = area * breadth;
        cout << "Rectangle = " << Rectangle << endl;
    }
    calculat(float num, float area, float breadth)
    {
        cout << "enter area : \n";
        cin >> area;
        cout << "enter bteadth  :\n";
        cin >> breadth;
        cout << "Enter number(1.2) : \n";
        cin >> num;
        cout << "------- Triangle --------- \n ";
        float Triangle = 1.2 * area * breadth;
        cout << "Triangle = " << Triangle << endl;
    }
};
int main()
{
    float a, b,c;
     
    calculat c1(a);
    calculat c2(a, b);
    calculat c3(a,b,c);

    return 0;
}
