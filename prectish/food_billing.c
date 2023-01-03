#include <stdio.h>
int main()
{
    int item, que, ammont1 = 0, ammont2 = 0, ammont3 = 0, ammont4 = 0, net_ammont = 0;
    int choice, ammont;

    printf("<<<<<------------> will come to hotel for avadh <--------------->>>>\n");

top:
    printf("plese enter your choice\n");
    printf("   item             que              price\n");
    printf("1.)burger          1.                100  \n");
    printf("2.)pizza           1.                220  \n");
    printf("3.)dhosha          1.                150  \n");
    printf("4.)idli            1.                120  \n");

    printf("\nyou have selecte item...");
    scanf("%d", &item);

    if (item == 1)
    {
        printf("\nyou have selecte is burger...");
        printf("\nselecte que...");
        scanf("%d", &que);
        ammont1 = que * 100;
        printf("Amount= %d\n", ammont1);
        net_ammont += ammont1;
        printf("\nnet_ammont is %d", net_ammont);
    }

    else if (item == 2)
    {
        printf("\nyou have selecte is pizza...");
        printf("\nselecte que...");
        scanf("%d", &que);
        ammont2 = que * 220;
        printf("Amount= %d\n", ammont2);
        net_ammont += ammont2;
        printf("net_ammont is %d", net_ammont);
    }
    else if (item == 3)
    {
        printf("\nyou have selecte is dhosha...");
        printf("\nselecte que...");
        scanf("%d", &que);
        // printf("\nyour bill");
        ammont3 = que * 150;
        printf("Amount= %d\n", ammont3);
        net_ammont += ammont3;
        printf("net_ammont is %d", net_ammont);
    }
    else if (item == 4)
    {
        printf("\nyou have selecte is idli...");
        printf("\nselecte que...");
        scanf("%d", &que);
        // printf("\nyour bill");
        ammont4 = que * 120;
        printf("Amount= %d\n", ammont4);
        net_ammont += ammont4;
        printf("net_ammont is %d", net_ammont);
    }
    else
    {
        printf("you have no selecte  an item");
    }
    // input:
    printf("\nyou ar continu choice    (yes for 1) ----   (no for 2) :");
    scanf("%d", &choice);

    // printf("%d", choice);
    if (choice == 1)
    {
        goto top;
    }
    else if (choice == 2)
    {
        // net_ammont = ammont1 + ammont2 + ammont3 + ammont4;
        printf("net amount = %d\n", net_ammont);

        printf("thank you visit again");
    }
    else
    {
        printf("please enter velid input !!");
    }

    return 0;
}
