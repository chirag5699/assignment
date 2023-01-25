
#include <stdio.h>
int main()
{
    int n;
    int ans;
    printf("enter tebal namber: ");
    scanf("%d", &n);

    for (int i = 1; i <=10; i++)
    {
        //ans = n * i;
        printf("%d*%d=%d\n", n,i ,n*i);
        // printf("%d", n);
        // printf("*%d", i);
        // printf("=%d", ans);
        // printf("\n");
    }

    return 0;
}