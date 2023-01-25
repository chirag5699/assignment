#include <stdio.h>
int main()
{
     int i = 0;

    int max = 0;
    int n = 0;
    int ar[i];

    printf("enter the namber of value n : ");
    scanf("%d,", &n);

    while (n >= 1)
    {
        ar[i] = n % 10;
        n = n / 10;
        i++;
    }
    ar[i] = n;

    for (int s = 0; s <= i; s++)
    {
        if (ar[s] > max)
        {
            max = ar[s];
        }
    }
    printf("max value of %d", max);

    // int ar[50], size, i, max;
    // printf("enter size arr : ");
    // scanf("%d", &size);

    // for (int i = 0; i < size; i++)
    // {
    //     scanf("%d", ar[i]);
    // }
    // max = ar[0];
    // for (int i = 0; i < size; i++)
    // {
    //     if (ar[i] > max)
    //     {
    //         max = ar[i];
    //     }
    // }
    // printf("max value of ar : %d", max);
    return 0;
}