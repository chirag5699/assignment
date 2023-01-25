#include <stdio.h>
int main()
{

    int n1 = 0, n2 = 1, no, n3;
    printf("enter namber");
    scanf("%d", &no);
    for (int i = 0; i < no; i++)
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
  
    return 0;
}
