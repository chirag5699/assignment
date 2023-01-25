#include <stdio.h>
int main()
{

    printf("1)-->\n");

    for (int i = 0; i <= 6; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", i + j);
        }
        printf("\n");
    }

    printf("2)--->\n");

    int i, j;
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", j + 97);
        }
        printf("\n");
    }

    printf("3)--->\n");
    int a = 0;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("%d ", ++a);
        }
        printf("\n");
    }

    printf("4)--->>\n");
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (j % 2 == 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    printf("5)--->>\n");

    for (int i = 1; i <= 8; i++)
    {
        for (int j = 8; j >= i; j--)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }
    printf("6)--->\n");

    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 10; i >= 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}