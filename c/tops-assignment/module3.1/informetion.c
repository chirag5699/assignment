#include <stdio.h>
int main()
{

    // printf("my name is chirag\n");
    // printf("birth date: is 27'july,1994\n");
    // printf("my age is: 28 years\n");
    // printf("my add is: b/504. angan res. sudama chowk.mota varchha.surat\n");

    int food, qun, amount = 1;
    int netAmount = 0;
menu :
    printf("<<<<<------------------------->     will come to hotel for avadh    <-------------------------------->>>>\n");
    printf("plese enter your choice\n");
    printf("   item             que              price\n");
    printf("1.)burger          1.                100  \n");
    printf("2.)pizza           1.                220  \n");
    printf("3.)dhosha          1.                150  \n");
    printf("4.)idli            1.                120  \n");

    printf("\nyou have selecte item...");
    scanf("%d", &food);

    if (food == 1)
    {
        printf("\nyou have selecte is burger...");
        printf("\nselecte que...");
        scanf("%d", qun);
        amount = qun * 100;
        netAmount += amount;
        printf("amount = %d \nnet amount = %d ", amount, netAmount);
    }
    else if (food == 2)
    {
        printf("\nyou have selecte is pizza...");
        printf("\nselecte que...");
        scanf("%d", qun);
        amount = qun * 220;
        netAmount += amount;
        printf("amount = %d \nnet amount = %d ", amount, netAmount);
    }
    else if (food == 3)
    {
        printf("\nyou have selecte is dhosha...");
        printf("\nselecte que...");
        scanf("%d", qun);
        amount = qun * 150;
        netAmount += amount;
        printf("amount = %d \nnet amount = %d ", amount, netAmount);
    }
    else if (food == 4)
    {
        printf("\nyou have selecte is idli...");
        printf("\nselecte que...");
        scanf("%d", qun);
        amount = qun * 120;
        netAmount += amount;
        printf("amount = %d \nnet amount = %d ", amount, netAmount);
    }
    else
    {
        printf("you have no selecte  an item");
         goto menu;
    }
    char yes;
    printf("\nyou ar continu  yes  or   no :");
    scanf("%d\n", &yes);
    scanf("%d\n", &yes);
    if (yes == 'Y' || yes == 'y')
    {
    }
    else if (yes == 'n' || yes == 'N')
    {
        printf("net amount = %d/-\n", netAmount);
    }
    else
    {
        printf("enter valid input");
    }
    return 0;
}