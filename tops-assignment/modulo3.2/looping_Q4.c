#include <stdio.h>
int main()
{
    //    odd numbers//

    int i = 0, no;
    printf("entar no");
    scanf("%d", &no);
    for (i = 0; i <= no; i++)
    {

        if (i % 2 == 1)

        {
            printf("%d\n", i);
        }
    }
    printf("namber is odd");

    return 0;
}