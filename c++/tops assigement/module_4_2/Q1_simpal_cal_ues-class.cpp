#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class opreturs
{
public:
    //  WAP to create simple calculator using class  //

    // addition, subtraction, multiplication, division and modulo

    int nam1, nam2;
    void calculet()
    {
        cout << "enter nam1 : ";
        cin >> nam1;
        cout << "enter nam2 : ";
        cin >> nam2;

        // simple calculator
        cout << "--------------------------\n";
        cout << "addition is = " << nam1 + nam2 << endl;
        cout << "---------------------------\n";

        cout << "subtraction is =" << nam1 - nam2 << endl;
        cout << "---------------------------\n";

        cout << "multiplication is =" << nam1 * nam2 << endl;
        cout << "----------------------------\n";

        cout << "division is = " << fixed << setprecision(2) << (float)nam1 / (float)nam2 << endl;
        cout << "-----------------------------\n";

        cout << "modulo is = " << nam1 % nam2 << endl;
    }
};
int main()
{

    opreturs op;
    op.calculet();
    return 0;
}