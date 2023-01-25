#include <stdio.h>
#include <string.h>
int main()
{
    // many Even numbers are there//

    int i, m = 0;
    int no;
    char line[100];
    printf("entar no");
    scanf("%d", &no);
    int lingth = strlen(line);
    for (i = 0; i <= no; i++)
    {

        if (i % 2 == 0)

        {
            printf("%d,", i);
            m++;
        }
    }
    printf("\nnamber is even");
    printf("\nlingth of string is %d", m);

    // gets(line);

    return 0;
}
