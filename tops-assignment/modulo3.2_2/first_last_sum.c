#include <stdio.h>
int main()

{
    int num;
    double sum, last;

    printf("enter num : ");
    scanf("%d", &num);

    last = num % 10;  //  last digite
    while(num>=9)
    {
        num = num / 10;
    }
    sum = num + last;
    printf("first & last digite sum %lf", sum);
    return 0;
}