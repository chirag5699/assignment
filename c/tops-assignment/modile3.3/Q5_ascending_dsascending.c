#include <stdio.h>
int main()
{
    // ascending

    int arr[20];
    int c;
    printf("enter of value  : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }
    printf("arrey eliment  ascending : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", arr[i]);
    }
    // dsascending
    printf("\nenter of value  : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (arr[i] < arr[j])
            {
                c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }
    printf("arrey eliment dsascending : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", arr[i]);
    }
    return 0;
}