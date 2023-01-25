#include <stdio.h>
int main()
{
    int ar1[2][2];
    int ar2[2][2];
    int mal[2][2];
    printf("ar1 ---> \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter namner %d %d : ", i, j);
            scanf("%d", &ar1[i][j]);
        }
    }
    printf("ae2--->");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter namner %d %d : ", i, j);
            scanf("%d", &ar2[i][j]);
        }
    }
    printf("\n");
    // output
    printf("arrey1->> ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d, ", ar1[i][j]);
        }
    }
    printf("\n");
    // output
    printf("arrey2->> ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d, ", ar2[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            mal[i][j] = ar1[i][j] * ar2[i][j];
        }
    }
    printf("\n");
    printf("subtraction =");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
         //   for (int k = 0; k < 2; k++)
          //  {
                // mal[i][j] = mal[i][j] + ar1[i][k] * ar2[k][j];
           // }

         printf("%d, ", mal[i][j]);
    }

    return 0;
}