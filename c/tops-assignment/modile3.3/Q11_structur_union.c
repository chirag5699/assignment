#include <stdio.h>
struct EMP1
{
    char empName[50];
    int empID;
    int empsalary;
};
union EMP2
{
    char empName[50];
    int empID;
    int empsalary;
};

int main()
{
    struct EMP1 s; 
    union EMP2 u;

    printf("\nSize of structure: %d\n", sizeof(s));
    printf("Size of structure EMP1 name: %d\n", sizeof(s.empName));
    printf("Size of structure EMP1 ID: %d\n", sizeof(s.empID));
    printf("Size of structure EMP1 ID: %d\n", sizeof(s.empID));

    printf("\nSize of union: %d\n", sizeof(u));
    printf("Size of union persin name: %d\n", sizeof(u.empName));
    printf("Size of union person rollno: %d\n", sizeof(u.empID));
    return 0;
}