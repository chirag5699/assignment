#include <stdio.h>
int main()
{
    //    odd numbers//
    int c=0;
    int i = 0, no;
    char line[100];
    printf("entar no");
    scanf("%d", &no);
    int lingth = strlen(line);
    for (i = 0; i <= no; i++)
    {

        if (i % 2 != 0)

        {
            printf("%d,", i);
            c++;
        }
    }
    printf("\nnamber is odd");
    printf("\nlingth of string is %d", c);

    return 0;
}