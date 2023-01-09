#include<stdio.h>
int main()
{
  int a[10], Size, i, Largest;
  printf("\nPlease Enter the size of an array \n");
  scanf("%d",&Size);
  printf("\nPlease Enter %d elements of an array: \n", Size);
  for(i=0; i<Size; i++)
   {
     scanf("%d",&a[i]);
   }  
  Largest = a[0];
  for(i=1; i<Size; i++)
   {
    if(Largest<a[i])
     {
       Largest=a[i];
     }   
   }
  printf("\nLargest element in an Array = %d", Largest);
  return 0;
}