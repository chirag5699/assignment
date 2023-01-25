#include <stdio.h>

//     find reverse of string using recursion    //

void reversename() // function declaration
{
  char a;
  scanf("%c",&a);
  printf("%c", a);
  if (a != '\n')
  {
    reversename(); // function definetion recarsion
    printf("%c", a);
  }
}
int main()
{
  //char a;
  printf("Enter a name: ");
  //scanf("%c", a);
  reversename(); // call function

  return 0;
}