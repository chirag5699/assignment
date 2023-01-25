#include <stdio.h>
int main()
{
    int ar1[3][3];
    int ar2[3][3];
    int multiplication[3][3];
    printf("ar1 ---> \n"); // input ar1
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter namner %d %d : ", i, j);
            scanf("%d", &ar1[i][j]);
        }
    }
    printf("ae2--->"); // input  ar2
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter namner %d %d : ", i, j);
            scanf("%d", &ar2[i][j]);
        }
    }
    printf("\n");
    printf("arrey1->> \n"); // output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", ar1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("arrey2->> \n"); // output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", ar2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            multiplication[i][j] = 0;
            for (int k = 0; k < 2; k++)
                multiplication[i][j] += ar1[i][k] * ar2[k][j];
        }
    }
    printf("\n");
    printf("multiplication=add = \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)

        {
            printf("%d, ", multiplication[i][j]);
        }
        printf("\n");
    }

    return 0;
}