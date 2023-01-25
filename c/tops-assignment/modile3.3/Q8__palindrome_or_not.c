
#include <stdio.h>
#include<string.h>

int main()
{
    char string[100], rev[100];
    printf("enter string :");
    gets(string);

// copy string to rev
    strcpy(rev, string); // rev will be used to check palindrome



    strrev(rev); // reverse
    int answer = strcmp(string,rev);  // return valau intiger

    if (strcmp(string,rev)==0)
    {
        printf("%s string ia a palindrome");
    }
    else
    {
        printf(" %s string is not palindrome");
    }

        return 0;
}