#include <stdio.h>
#include <string.h>

int main()
{
    // int num, rem, rev = 0;
    // printf("enter namber: ");
    // scanf("%d", &num);

    // while (num != 0)
    // {
    //     rem = num % 10;
    //     // rev = rev * 10 + r;
    //     num = num / 10;

    //     printf("%d\n", rem);
    // }

    // WAP to print number in reverse order e.g. : number = 64728 --->reverse = 82746 //
    printf("*enter number and get reverse number :-  \n");
    char num[20];
    printf("enter namber: ");
    scanf("%s", &num);
    // char ans= strrev(num);
    printf("%s", strrev(num));

    // char number[50];
    // printf("ENTER NUMBER : ");
    // scanf("%s", &number);
    // printf("REVERSE NUMBER : %s", strrev(number));

    //     for (int i = strlen(number); i >= 0; i--)
    //     {
    //         printf("%c", number[i]);
    // }
    return 0;
}