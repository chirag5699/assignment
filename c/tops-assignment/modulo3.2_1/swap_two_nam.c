#include <stdio.h>
int main()
{
    //  swap two numbers without using third variable //

    int a = 10;
    int b = 20;

    printf("before swap -->> a=%d,b=%d", a, b);
    a = a + b; //(10+20=30 : a = 30)
    b = a - b; //(30-20=10 : b = 10)
    a = a - b; //(30-10=20 : a = 20)
    printf("\nafter swap -->> a=%d,b=%d", a, b);

    return 0;
}
