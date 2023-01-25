#include <stdio.h>
#include <stdio.h>
int main()
{
    char string[20];
    int i = 0;
    printf("enter string : ");
    gets(string);
    // for (int i = 0; string[i] ! = '\0'; i++)
    while (string != '\0')
    {
        i++;
    }

    printf("langth of string %d", i);
    return 0;
}