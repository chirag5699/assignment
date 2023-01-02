#include <stdio.h>
int main()
{
    //   Sum of odd numbers//
    int n;
    int sum = 0;
    printf("enter no n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d +", i);
            sum = sum + i;
        }
    }
    printf("sum is odd\n");

    printf("sum is %d\n", sum);
    return 0;
}