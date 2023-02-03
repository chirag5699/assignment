#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
int main()
{
      //  WAP to create simple calculator using class  //

      // addition, subtraction, multiplication, division and modulo)

      int nam1, nam2;

      cout << "enter nam1 : ";
      cin >> nam1;
      cout << "enter nam2 : ";
      cin >> nam2;

      // simple calculator

      cout << "addition is " << nam1 + nam2 << endl;
      cout << "subtraction is" << nam1 - nam2 << endl;
      cout << "multiplication is " << nam1 * nam2 << endl;
      cout << "division is " << fixed << setprecision(4) << (float)nam1 / (float)nam2 << endl;
      cout << "modulo is " << nam1 % nam2 << endl;
      printf("division is %.2f", (float)nam1 / (float)nam2);
      return 0;
}