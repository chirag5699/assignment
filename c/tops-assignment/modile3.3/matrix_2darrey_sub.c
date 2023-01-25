#include <stdio.h>
int main()
{
    int arreyA[3][3];
    int arreyB[3][3];
    int Subtraction[3][3];
    printf("arreyA -->  \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter namner %d %d : ", i, j);
            scanf("%d", &arreyA[i][j]);
        }
    }
    printf("arreyB -->  \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter namner %d %d : ", i, j);
            scanf("%d", &arreyB[i][j]);
        }
    }
    //printf("\n");
    // output
    printf("arreyA->> \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", arreyA[i][j]);
        }
        printf("\n");
    }
    //printf("\n");
    printf("arreyB->>  \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", arreyB[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Subtraction[i][j] = arreyA[i][j] - arreyB[i][j];
        }
    }
    printf("\n");
    printf("subtraction =");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", Subtraction[i][j]);
        }
    }

    return 0;
}