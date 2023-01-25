#include <stdio.h>
int main() 
 
{
    int mob_no;
    int age;
    char name[100];
    char add[100];
    FILE *ch;

    ch = fopen("dev,txt", "w");
    printf("enter detels studants");
   
    printf("\nenter name : ");
    gets(name);
    
    printf("enter mob_no : ");
    scanf("%d",&mob_no);
    //printf("%d", mob_no);
    printf("enter age :");
    scanf("%d", &age);
   
    printf("enter add : ");
    //gets(add);
    scanf("%s", &add);

    fprintf(ch, "name  :  %s,\nMob No : %d, \nAge : %d,\nadd : %s", name, mob_no, age, add);

    fclose(ch);

    return 0;
}