#include <stdio.h>
int main()
{
    int num, riminder;
    int sum = 0;
    printf("enter num");
    scanf("%d", &num);

    while (num > 0)
    {
        riminder = num % 10;
        sum = sum + riminder;
        num = num / 10;
    }
    printf("Sum of namber: %d", sum);

    return 0;
}
