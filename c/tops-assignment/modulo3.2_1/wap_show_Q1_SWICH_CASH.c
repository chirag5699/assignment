#include <stdio.h>
int main()
{
    /* int time;
     printf("enter time (1-10): ");
     scanf("%d", &time);

     switch (time)
     {
     case 1:
         printf("one");
         break;

     case 2:
         printf("two");
         break;
     case 3:
         printf("three");
         break;
     case 4:
         printf("four");
         break;
     case 5:
         printf("five");
         break;
     case 6:
         printf("six");
         break;
     case 7:
         printf("seven");
         break;
     case 8:
         printf("eight");
         break;
     case 9:
         printf("nine");
         break;
     case 10:
         printf("ten");
         break;

     default:
         printf("carrect velid time\n");
         printf("thank you");

         break;          */

    //  chareter //
    char day; //(1-mom,2-tuesh,3-wendes.4-thus,5-fri,6-seter,7-sun)
    printf("entar day (1-7) :   \n");
    scanf("%c", &day);

    switch (day)
    {
    case '1':
        printf("momday");
        break;
    case '2':
        printf("tueshday");
        break;
    case '3':
        printf("wendesday");
        break;
    case '4':
        printf("thusday");
        break;
    case '5':
        printf("friday");
        break;
    case '6':
        printf("saterday");
        break;
    case '7':
        printf("sunday");
        break;

    default:
        printf("carrect right day\n");
        printf("thank you");
        break;
    }
    return 0;
}