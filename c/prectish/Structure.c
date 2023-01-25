#include <stdio.h>
#include <string.h>
struct employ
{
    int id, selery, age;
    char name[100], add[100];
};
int main()

{
    // int num;
    // printf("enter employs: ");
    // scanf("%d", num);

    struct employ arr[3];

    for (int i = 0; i < 3; i++)
    {
        printf("enter is --> id\n");
        scanf("%d", &arr[i].id);

        printf("enter is name-->\n");
        // scanf("%s", &arr[i].name);
        gets(arr[i].name);
        gets(arr[i].name);

        printf("enter  is selery-->\n");
        scanf("%d", &arr[i].selery);

        printf("enter is add-->\n");
        // scanf("%s", &arr[i].add);
        gets(arr[i].add);
        gets(arr[i].add);

        printf("enter is age-->\n");
        scanf("%d", &arr[i].age);
    }
    printf("**********************************************************************************************\n");
    printf("id\t\tname\t\tselery\t\tadd\t\tage\n");

    for (int i = 0; i < 3; i++)

    {

        printf("%d\t|\t%s\t|\t%d\t|\t%s\t|\t%d\n", arr[i].id, arr[i].name, arr[i].selery, arr[i].add, arr[i].age);
        // printf("deta is id=%d\t",arr[i].id);
        // printf("deta is name=%c\t",arr[i].name);
        // printf("deta is selery=%d\t",arr[i].selery);
        // printf("deta is add=%c\t",arr[i].add);
        // printf("deta is age=%d\t",arr[i].age);
    }
    printf("*****************************************************************************************");
    return 0;
}