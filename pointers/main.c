#include <stdio.h>
#include <stdlib.h>
void func1(int[] );
int main()
{
    int i;
    int arr[5] = {1,2,3,4,5};
    for (i=0;i<5;i++)
    {
        printf("%d,",arr[i]);
    }

    for (i=0;i<5;i++)
    {
       func1(arr[i]);
    }
    return 0;
}
void func1(int array[]){
    array[] = {5,4,3,2,1};
printf("%d",array);

}
