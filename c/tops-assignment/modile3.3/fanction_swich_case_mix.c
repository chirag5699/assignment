#include <stdio.h>

int faboncci(int a) // fanction def
{

    int n1 = 0, n2 = 1, n3;

    for (int i = 0; i < a; i++)
        if (i <= 1)
        {
            printf("%d, ", i);
        }
        else
        {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            printf("%d, ", n3);
        }
    return a;
}

int factorial(int a)
{
    int ch = 1;
    for (int i = 1; i <= a; i++)
    {
        ch *= i;
    }
    return ch;
}

int evenodd(int a)

{
    // ternary operator

    (a % 2 == 0) ? printf(" is even nem : %d", a) : printf(" is odd nem : %d", a);

    return 0;
}

int tabel(int n)
{
    for (int i = 1; i <= 10; i++)

        printf("%d*%d=%d\n", n, i, n * i);
    return n;
}

int main()
{
    int choice;
top:
    printf("enter your choice(1)faboncci, 2)factorial , 3)evenodd ,4)print tabal: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        printf("case 1->your choice faboncci  \n");
        int no, a3;
        printf("\nenter namber");
        scanf("%d", &no);
        faboncci(no); // call
        break;
    }
    case 2:
    {
        printf("case 2->your choice factorial  \n");
        int namber;
        printf("\nenter  factorial namber : \n");
        scanf("%d", &namber);
        int a = factorial(namber); //  call
        printf("%d", a);
        break;
    }

    case 3:
    {
        printf("case 3->your choice evenodd  \n");
        int namber;
        printf("\nenter nambar : \n");
        scanf("%d", &namber);
        int eo = evenodd(namber); // call
        break;
    }
    case 4:
    {
        printf("case 4->your choice print tabal  \n");
        int num;
        printf("enter tebal namber: ");
        scanf("%d", &num);
        int ans = tabel(num); // call
        break;
    }
    default:
    {
        printf("not carret choice");
        printf("\n");

        break;
    }
    }
    char ch;
    printf("\n you went to plase more choice ?(press y or n)");
    scanf("%s", &ch);
    if (ch == 'y' || ch == 'Y')
    {
        goto top;
    }
    else if (ch == 'n' || ch == 'N')
    {
        printf("you are exit");
    }

    return 0;
}