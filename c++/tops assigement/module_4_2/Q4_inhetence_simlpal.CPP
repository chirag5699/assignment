
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class calculation    // base calss
{
public:
      float a, b;
      void input()
      {
            cout << "\nenter namber a  : ";
            cin >> a;
            cout << "\nenter namber b : ";
            cin >> b;
      }
};
class addition : public calculation   // derived class : base class
{
public:
      void add()
      {
            int addition= a+b;
            cout << "addition = " << addition;
      }
};
class subtraction : public calculation
{
public:
      void sub()
      {
            int subtraction  = a - b;
            cout << "subtraction = " << subtraction;
      }
};
class multiplication : public calculation
{
public:
      void mal()
      {
            int multiplication = a * b;
            cout << "multiplication = " << multiplication;
      }
};
class division : public calculation
{
public:
      void div()
      {
            float division = a / b ;

            cout << "division = " << setprecision(3) << (float)division << endl;
      }
};
int main()

{

      addition a1;
      a1.input();
      a1.add();
      subtraction s1;
      s1.input();
      s1.sub();
      multiplication m1;
      m1.input();
      m1.mal();
      division d1;
      d1.input();
      d1.div();

      return 0;
}