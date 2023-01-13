#include <stdio.h>
int main()
{
    int i = 0;

    int max = 0;
    int n = 0;
    int ar[i];

    printf("enter the namber of value n : ");
    scanf("%d", &n);

    while (n >= 9)
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
    return 0;
}