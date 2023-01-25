#include <stdio.h>
int main()
{

    int a1[5];
    int a2[5];
    int add[5];
    int i;
    printf("enter namber a1 \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a1[i]);
    }

    printf("enter namber a2 \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a2[i]);
    }
    printf("a1] ==>");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ,", a1[i]);
    }
    printf("\na2] ==>");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ,", a2[i]);
    }
    printf("\naddition :");
    for (int i = 0; i < 5; i++)
    {

        add[i] = a1[i] + a2[i];
        printf("%d, ", add[i]);
    }

    return 0;
}
