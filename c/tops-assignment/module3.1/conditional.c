#include <stdio.h>
int main()
{
    // check if the given year is a leap year or not  //

    int year;
    printf("enter is year\n");
    scanf("%d", &year);

    printf("year is %d", year);
    if (year % 400 == 0)        
    {
        printf("\nleap year");
    }
    else if (year % 200 == 0)
    {
        printf("\n leap years");
    }
    else
    {
        printf("not leap year\n");
    }

    return 0;
}
