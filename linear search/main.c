#include <stdio.h>
#include <stdlib.h>

int main()
{
  int size,i,n;
  printf("enter the size of the array: \n");
  scanf("%d",&size);
  int arr[size];
  printf("enter the array elements:\n");
  for (i=0;i<size;i++)
  {
      scanf("%d",&arr[i]);

  }
  for (i=0;i<size;i++)
  {
      printf("\n%d",arr[i]);

  }
  printf("\nenter the number to be searched in the array:\n");
  scanf("%d",&n);
   for (i=0;i<size;i++)
  {
      if(arr[i] == n)
     {
      printf("\nthe number %d is present at %d position",n,i);
     }
     else if (arr[i] != n)
        {
        printf("the number not present");
     }


  }

    return 0;
}
