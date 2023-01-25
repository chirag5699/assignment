#include <stdio.h>
int main()
{

    char ch;
    printf("enter ch : ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("upper cash");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("lauer case");
    }
    else
    {
        printf(" sorry not velid right case");
    }

    return 0;
}