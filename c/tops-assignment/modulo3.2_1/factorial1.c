#include<stdio.h>
int main ()
{

    //print factorial of given number//
     int factorial = 1, namber;
    // int arrey[10];

    printf("enter  factorial namber : \n");
    scanf("%d", &namber);
    for (int i = 1; i <=namber; i++)
    {
        factorial = factorial * i;
    }
    printf("%d", factorial );
    return 0;
}
