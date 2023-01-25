#include <stdio.h>
int main() 
 
{
    int mob_no;
    int age;
    char name[100];
    FILE *ch;

    ch = fopen("chirag,txt", "w");
    printf("enter detels studants");
    printf("\nenter name : ");
    gets(name);
    
    printf("enter mob_no : ");

    scanf("%d" ,&mob_no);
    printf("enter age :");
    scanf("%d", &age);
    fprintf(ch,"name  :  %s,\nMob No : %d, \nAge : %d", name, mob_no, age);
    fclose(ch);

    return 0;
}