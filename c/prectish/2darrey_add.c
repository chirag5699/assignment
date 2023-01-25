#include <stdio.h>
int main()
{
    int row = 2;
    int colum = 2;
    int a1[row][colum];
    int a2[row][colum];
    int add[row][colum];
    int i, j;
    // input 1
    printf("enter  a1:  \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < colum; j++)
        {
            printf("enter number %d %d :", i, j);
            scanf("%d", &a1[i][j]);
        }
    }
    printf("enter a2:  \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < colum; j++)
        {
            printf("enter %d %d :", i, j);
            scanf("%d", &a2[i][j]);
        }
    }
    // print a1
    printf("arry 1 ]=");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < colum; j++)
        {
            printf(" %d ", a1[i][j]);
        }
    }
    // print a2
    printf("\n n2 ]=");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < colum; j++)
        {
            printf(" %d ", a2[i][j]);
        }
    }
    // addision//
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < colum; j++)
        {
            add[i][j] = a1[i][j] + a2[i][j];
        }
    }
    printf("\n");
    // print addision//
    printf("addition =");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < colum; j++)
        {
            printf("%d, ", add[i][j]);
        }
    }
    return 0;
}
