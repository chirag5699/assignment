#include <stdio.h>
int main()
{
  //   simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo)//
  int a, b;
  char opertion;
  //(1.+ ,2.- ,3.* , 4./ ,5.%)

  printf("enter a");
  scanf("%d", &a);
  printf(" enter choice oprestion (+ ,- ,* ,/ ,%%)\n ");
  scanf("%c", &opertion);
  scanf("%c", &opertion);

  printf("enter b\n");
  scanf("%d", &b);

  switch (opertion)
  {
  case '+':
    printf("Addition is %d\n", a + b);
    break;

  case '-':
    printf("Subtraction is %d\n", a - b);
    break;

  case '*':
    printf("Multiplication is %d\n", a * b);
    break;

  case '/':
    printf("Division is %d\n", a / b);
    break;

  case '%':
    printf("modulo is %d\n", a % b);
    break;

  default:
    printf(" carecct sum");
    break;
  }
  return 0;
}