#include <stdio.h>
int main()
{
    // nested if_else
    int namber;
    printf("entar namber :  \n");
    scanf("%d", &namber);

    if (namber > 1 && namber < 50)
    {
        printf("namber is positive\n");
        if (namber % 3 == 0)
            printf("nambar is evan");
        else
            printf("namber is odd");
    }
    else
    {
        printf("namber is negtive");
    }

    // ladder _if_else

    /* int namber;
     printf("enter any namber");
     scanf("%d", &namber);
      if (namber == 1)
      {
         printf(" namber san");
      }
      else if (namber == 2)
      {
         printf(" namber mon");
      }
      else if (namber == 3)
      {
         printf(" namber tues");
      }
      else if (namber == 4)
      {
         printf(" namber wanes");
      }
      else if (namber == 5)
      {
         printf(" namber tuesh");
      }
      else if (namber == 6)
      {
         printf(" namber fri");
      }
      else if (namber == 7)
      {
         printf(" namber satae");
      }
      else
      {
        printf("no curret namber");
      }
       */

    /*  2) time

    float time;
    printf("enter time");
    scanf("%f", &time);

    if (time <= 1 && time < 12)
    {
        printf("good morning");
    }
    else if (time > 12 && time <= 18)
    {
        printf("good afterunoon");
    }
    else if (time > 18 && time <= 20)
    {
        printf("good evaning");
    }
    else if (time > 20 && time <= 24)
    {
        printf("good nght");
    }
    else
    {
        printf("enter velide time");
    }

 */

    //  result

    /*  int ss, eco, guj, hindi, ba;

      printf("enter marks is ss");
      scanf("%d", &ss);

      printf("enter marks is eco");
      scanf("%d", &eco);

      printf("enter marks is guj");
      scanf("%d", &guj);

      printf("enter marks is hindi");
      scanf("%d", &hindi);

      printf("enter marks is ba");
      scanf("%d", &ba);

      int  total = ss + eco + guj + hindi + ba;
      printf("total is %d", total);

      float par = (float)total / 500 * 100;
      printf("\npar is %f", par);

      if (par >= 90 && par <= 100)
      {
          printf("\ngread A+");
      }
      else if (par < 90 && par > 80)
      {
          printf("\ngread A");
      }
      else if (par < 80 && par > 70)
      {
          printf("\ngread B");
      }

      else if (par < 70 && par > 55)
      {
          printf("\ngread C");
      }
      else if (par < 55 && par > 35)
      {
          printf("\ngread D");
      }

      else
      {
          printf("\nyour fill");
      }*/

    return 0;
}
