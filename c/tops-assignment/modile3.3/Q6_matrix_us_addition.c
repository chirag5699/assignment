#include <stdio.h>
int main()
{
    //   make addition, Subtraction and multiplication of two matrix using 2 - D Array //

    int arr1[2][2];
    int arr2[2][2];
    int addition[2][2];
    
    

    printf("enter arr1: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter namber %d %d : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("entar arr2 :  \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter namber %d %d :", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("print arr1 -->>> \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d,", arr1[i][j]);
        }
        printf("\n");
    }
    printf("print arr2 -->>> \n1");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d,", arr2[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            addition[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("\nmatrix  addition\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", addition[i][j]);
        }
    }
    return 0;
}