#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    int max;
    max = arr[0];
    for(i=1;i<n;i++)
    {
        if (arr[i]>max)
            max = arr[i];
        }
        printf("\n%d is the maximum element\n",max);
        for (i = (&max-1);i< n-1;i++)
        {
            arr[i] = arr[i+1];
        }
        for (i=0;i<n-1;i++){
            printf("\n%d",arr[i]);
        }
        int large =arr[0];
        for (i=1;i<n-1;i++){
                if(arr[i]>large){
                    large =arr[i];
                }



        }

         printf("\n%d is the runnerup score",large);

    return 0;
}
