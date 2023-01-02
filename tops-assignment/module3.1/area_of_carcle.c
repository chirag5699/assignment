#include <stdio.h>
int main()
{

  // 1)find out area is carcle
   int r ;
     printf("enter is area :");
     scanf("%d",&r);

    printf("carcal of area is %.3f",3.14*r*r);

  // 2) find out rectangle
  

      float length;
  float width;

  printf("rectangle of length ");
  scanf("%f", &length);

  printf(" rectangle of width ");
  scanf("%f", &width);

  printf("area is %.2f", length * width);

  // 3) find out is triangle

    float base,hight ;
    printf("enter is base :  ");
    scanf("%f", &base);

    printf("enter is hight :  ");
    scanf("%f", &hight );

    printf("area of triangle %.2f",(base*hight)/2);

      return  0;
}