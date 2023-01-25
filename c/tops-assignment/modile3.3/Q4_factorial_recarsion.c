#include <stdio.h>
int factorial(int n) // fanction definetion
{
     if (n > 1)
    {
        int fac = n * factorial(n - 1);
        return fac;
    }
}
int main()
{
    int n;
    printf("enter num n");
    scanf("%d", &n);
    int a = factorial(n); // fanction calling
    printf("n=%d\na=%d", n, a);
    return 0;
}
