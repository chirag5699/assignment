#include <stdio.h>
int maxnamber(int arr[], int n);  // fanction decleresion
int main()
{
   int n;
   int max = 0;
   int i;
   printf("enter the namber of value n : ");
   scanf("%d", &n);
   int arr[n];
   for (int i = 0; i < n; i++)  // input  
   {
      printf("enter nambar: ");
      scanf("%d", &arr[i]);
   }

   for (int i = 0; i < n; i++) // output
   {
      printf("%d ,", arr[i]);
   }
   max = maxnamber(arr, n); // argument; // call funcution
   printf("\nmax number : %d", max);

   return 0;
}
     int maxnamber(int arr[], int a) // peramiter; // fanction definetion
{
     int max = 0;

   for (int i = 0; i < a; i++)
   {
      if (max < arr[i])
      {
         max = arr[i];
      }
   }
   return max;
}