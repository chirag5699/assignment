#include <stdio.h>
struct employ
{
    int empNo, empAge;
    char empName[100], empAdd[100];
};
int main()
{

    int n;
    printf("total emp detels :");
    scanf("%d", &n);
    struct employ arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter your no :%d emp det", i + 1);
        printf("\nenter empNo : \n");
        scanf("%d", &arr[i].empNo);
        printf("\nenter empName : ");
        scanf("%s", &arr[i].empName);
        // gets(arr[i].empno)
        printf("\nenter empAge : ");
        scanf("%d", &arr[i].empAge);
        printf("\nenter empAdd : ");
        scanf("%s", &arr[i].empAdd);
        // gets(arr[i].empadd)
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("enter your no :%d emp det", i + 1);
        printf("\nempNo -> %d", arr[i].empNo);
        printf("\nempName -> %s", arr[i].empName);
        printf("\nempAge -> %d", arr[i].empAge);
        printf("\nempAdd -> %s", arr[i].empAdd);
        printf("\n");
    }
    printf("\n");

    return 0;
}