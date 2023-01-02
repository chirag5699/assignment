#include<stdio.h>
int main ()
{
           //  swap two numbers without using third variable //

           int a = 10;
           int b = 20;
           a = a + b;  //(10+20=30 : a = 30)
           b = a - b;  //(30-20=10 : b = 10)
           b = a + b;  //(30+10=40 : b = 40)
           b = a - b;  //(30-40=10 : b = 10)
           a = a - b;  //(30-10=20 : a = 20)
           //swap two numbers after  //
           int a = 20;
           int b = 10;

           return 0;
}

