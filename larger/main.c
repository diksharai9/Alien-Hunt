#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, large=0;
    printf("enter a number: ",n);
    while(n!=0){
        scanf("%d",&n);
        if(n>large){
            large = n;
        }

    }
    printf("the largest number is %d",large);
    return 0;
}
