#include <stdio.h>
int main()
{
    int price;
    printf("enter is price");
    scanf("%d", &price);

    if (price > 80000 && price < 100000)
    {
        printf("apple");
    }
    else if (price > 60000 && price < 80000)
    {
        printf("one plus");
    }
    else if (price > 30000 && price < 60000)
    {
        printf("samsung");
    }
    else if (price < 30000 && price > 20000)
    {
        printf("oppo");
    }
    else if (price > 10000 && price < 20000)
    {
        printf("vivo");
    }
    else
    {
        printf("any curret prise");
    }
    return 0;
}
