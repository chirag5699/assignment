#include <stdio.h>
int main()
{
    // result

    int ss, eco, guj, hindi, ba;

    printf("enter marks is ss : ");
    scanf("%d", &ss);

    printf("enter marks is eco : ");
    scanf("%d", &eco);

    printf("enter marks is guj : ");
    scanf("%d", &guj);

    printf("enter marks is hindi : ");
    scanf("%d", &hindi);

    printf("enter marks is ba : ");
    scanf("%d", &ba);

    int total = ss + eco + guj + hindi + ba;
    printf("total is %d", total);

    float par = (float)total / 500 * 100;
    printf("\npar is %.2f", par);

    if (par >= 90 && par <= 100)
    {
        printf("\ngread A+");
    }
    else if (par <= 90 && par >= 75)
    {
        printf("\ngread A");
    }
    else if (par <= 75 && par >= 60)
    {
        printf("\ngread B");
    }

    else if (par <= 60 && par >= 35)
    {
        printf("\ngread C");
    }

    else
    {
        printf("\nyour fill");
    }

return 0;
}