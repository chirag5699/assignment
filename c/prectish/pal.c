
#include <stdio.h>
#include <string.h>

int main()
{
    char string[100], rev[100];
    int first, last;
    int ori;

    printf("Enter string: ");
    gets(string);

    // copy str to rev
    strcpy(rev, string); // rev will be used to check palindrome

    // reverse
    first = 0;
    last = strlen(string) - 1; //-1 because last character is NULL \0
    while (first < last)
    {
        ori = string[first];
        string[first] = string[last];
        string[last] = ori;
        first++;
        last--;
    }

    // output
    printf("Reverse string: %s\n", string);

    // checking palindrome
    if (strcmp(rev,string)==0)
        printf("%s is palindrome!\n", string);
    else
        printf("%s is not palindrome!\n", string);
    return 0;
}
