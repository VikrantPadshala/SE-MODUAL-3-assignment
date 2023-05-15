#include <stdio.h>
int i;
int findMax(int arr[], int n) 
{
   int max = arr[0];
   for(i = 1; i < n; i++) 
   {
      if(arr[i] > max) 
	  {
         max = arr[i];
      }
   }
   return max;
}

int main() 
{
   int n;
   printf("Enter the size of the array: ");
   scanf("%d", &n);
   int arr[n];
   printf("Enter the array elements:\n");
   for(i = 0; i < n; i++) 
   {
      scanf("%d", &arr[i]);
   }
   int max = findMax(arr, n);
   printf("Maximum number in the array: %d", max);
   return 0;
}

