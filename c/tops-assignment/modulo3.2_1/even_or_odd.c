#include <stdio.h>
int main()
{
    // number is even or odd using ternary operator //

    int namber;
    printf("enter nambar  ");
    scanf("%d", &namber);

    if (namber % 2 == 0)
    {
        printf("%d--> is even nem", namber);
    }
    else
    {
        printf("%d--> is odd nem", namber);
    }

    //ternary operator


   // (namber % 2 == 0) ? printf("%d is even nem", namber) : printf("%d is odd nem", namber);
    
    return 0;
}