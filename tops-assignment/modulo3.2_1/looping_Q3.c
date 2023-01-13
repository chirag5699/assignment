#include <stdio.h>
int main()
{
    // many Even numbers are there//
    int i;
    int no;
    printf("entar no");
    scanf("%d", &no);
    for (i = 0; i <= no; i++)
    {

        if (i % 2 == 0)

        {
            printf("%d\n", i);
        }
    }
    printf("namber is even");

    return 0;
}
