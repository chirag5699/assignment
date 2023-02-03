#include <stdio.h>
#include <string.h>

int main()
{
    int num, rem, rev = 0;
    printf("enter namber: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
         rev = rev * 10 + rev;
        num = num / 10;
        
        // print revers namber
        printf("%d\n", rem);
    }



    // string revers nambar //
    char number[50];
    printf("ENTER NUMBER : ");
    scanf("%s", &number);
    printf("REVERSE NUMBER : %s", strrev(number));

   
     return 0;
}