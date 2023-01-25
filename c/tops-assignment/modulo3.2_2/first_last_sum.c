#include <stdio.h>
int main()

{
    int num;
    int sum, last;

    printf("enter num : ");
    scanf("%d", &num);

    last = num % 10;  //  last digite
    while(num>=9)
    {
        num = num / 10;
    }
    sum = num + last;
    printf("first & last digite sum %d", sum);

    return 0;
}