#include <stdio.h>
int main()
{

    float years, day;

    printf("enter years");
    printf("\nconvert years in to day");
    scanf("\n%f", &years);

    day = years * 365;
    printf("day is  : %.3f\n", day);

    printf("enter day");
    printf("\nconvert day in to years");
    scanf("\n%f", &day);

    years = day / 365;
    printf("years is : %.3f\n", years);

    return 0;
}