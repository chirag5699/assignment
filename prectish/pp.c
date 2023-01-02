
#include <stdio.h>
int main()
{

   int nam1, nam2, nam3, nam4, nam5, nam6, nam7, nam8, nam9, nam10;
   printf("enter no:");
   scanf("%d", &nam1);
   printf("enter no2:");
   scanf("%d", &nam2);
   printf("enter no3:");
   scanf("%d", &nam3);
   printf("enter no4:");
   scanf("%d", &nam4);
   printf("enter no5:");
   scanf("%d", &nam5);
   printf("enter no6:");
   scanf("%d", &nam6);
   printf("enter no7:");
   scanf("%d", &nam7);
   printf("enter no8:");
   scanf("%d", &nam8);
   printf("enter no9:");
   scanf("%d", &nam9);
   printf("enter no10:");
   scanf("%d", &nam10);
   int 
    even1, even2, even3, even4, even5, even6, even7, even8, even9, even10;
   int odd1, odd2, odd3, odd4, odd5, odd6, odd7, odd8, odd9, odd10;
   int numOfEvenNumber = 0;
   int num_of_odd_number = 0;

   if (nam1 % 2 == 0)
   {
     even1 = nam1;
     numOfEvenNumber++;
     printf("%d is even namber\n", nam1);
   }
   else
   {
     odd1 = nam1;
     num_of_odd_number++;
     printf("%d is odd nambre\n", nam1);
   }
   if (nam2 % 2 == 0)
   {
     even2 = nam2;
     numOfEvenNumber++;
     printf("%d is even namber\n", nam2);
   }
   else
   {
     odd2 = nam2;
     num_of_odd_number++;
     printf("%d is odd nambre\n", nam2);
   }
   if (nam3 % 2 == 0)
   {
     even3 = nam3;
     numOfEvenNumber++;
     printf("%d is even namber\n", nam3);
   }

   else
   {
     odd3 = nam3;
     num_of_odd_number++;
     printf("%d is odd nambre\n", nam3);
   }
   if (nam4 % 2 == 0)
   {
     even4 = nam4;
     numOfEvenNumber++;
     printf("%d is even namber\n", nam4);
   }
   else
   {
     odd4 = nam4;
     num_of_odd_number++;
     printf("%d is odd nambre\n", nam4);
   }
   if (nam5 % 2 == 0)
   {
     even5 = nam5;
     numOfEvenNumber++;
     printf("%d is even namber\n", nam5);
   }
   else
   {
     odd5 = nam5;
     num_of_odd_number++;
     printf("%d is odd nambre\n", nam5);
   }
   if (nam6 % 2 == 0)
   {
     even6 = nam6;
     numOfEvenNumber++;
     printf("%d is even namber\n", nam6);
   }
   else
   {
     odd6 = nam6;
     num_of_odd_number++;
     printf("%d is odd nambre\n", nam6);
   }
   if (nam7 % 2 == 0)
   {
     even7 = nam7;
     numOfEvenNumber++;
     printf("%d is even namber\n", nam7);
   }
   else
   {
     odd7 = nam7;
     num_of_odd_number++;
     printf("%d is odd nambre\n", nam7);
   }
   if (nam8 % 2 == 0)
   {
     even8 = nam8;
     numOfEvenNumber++;
     printf("%d is even namber\n", nam8);
   }
   else
   {
     odd8 = nam8;
     num_of_odd_number++;
     printf("%d is odd nambre\n", nam8);
   }
   if (nam9 % 2 == 0)
   {
     even9 = nam9;
     numOfEvenNumber++;
     printf("%d is even namber\n", nam9);
   }
   else
   {
     odd9 = nam9;
     num_of_odd_number++;
     printf("%d is odd nambre\n", nam9);
   }
   if (nam10 % 2 == 0)
   {
     even10 = nam10;
     numOfEvenNumber++;
     printf("%d is even namber\n", nam10);
   }
   else
   {
     odd10 = nam10;
     num_of_odd_number++;
     printf("%d is odd nambre\n", nam10);
   }
   int sum , evan ;
   sum=  sum+even1 + even2 + even3 + even4 + even5 + even6 + even7 + even8 + even9 + even10;
   int sum, odd;
   sum = sum + odd1 + odd2 + odd3 + odd4 + odd5 + odd6 + odd7 + odd8 + odd9 + odd10;

   return 0;
}