#include <stdio.h>
int main()
{
    int arre[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    int sum_even_num = 0;
    int sum_odd_num = 0;
    int even_nem, odd_nem;
    printf("enter 10 namber: \n");
    for (i = 0; i < 10; i++)
    {
        printf("enter value -->>");
        scanf("%d", &arre[i]);
    }
    printf("<<<<<----------------------->>>>>\n");
    for (i = 0; i < 10; i++)
    {
        if (arre[i] % 2 == 0)
        {
            printf("Even Number : ");
            printf("%d\n", arre[i]);
            sum_even_num += arre[i];
        }
    }

    printf("\nSum of even number: %d", sum_even_num);
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        if (arre[i] % 2 == 1)
        {
            printf("\nodd number : ");
            printf("%d", arre[i]);
            sum_odd_num += arre[i];
        }
    }
    printf("\n");
    printf("\nSum of odd number: %d", sum_odd_num);
    for (i = 0; i < 10; i++)
    {
        even_nem = arre[i];
    }

    // printf("even namber --->");
    return 0;
}
