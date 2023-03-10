#include <stdio.h>
int main()
{
    //   Sum of even numbers//
    int n,even;
    int sum = 0;
    printf("enter no n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ,", i);
    
            sum = sum + i;
        }
    }
    printf("\nsum is %d\n", sum);
    printf("namber is evan");
    return 0;
}