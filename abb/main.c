#include <stdio.h>
#include <stdlib.h>

   int subtractProductAndSum(int n){
    int sum,prod,rem,result;
    for(sum =0;n>0;n=n/10){
        sum = sum+n%10;
         }
         printf("%dis the sum",sum);
    for(prod = 1;n>0;n = n/ 10){
         rem = n % 10; // get the last-digit
        prod = prod*rem;
    }
    printf("%dis the product",prod);

   result =(prod -sum);
    return result;
}




int main()
{ int n,result;

printf("enter a number :");
scanf("%d",&n);
result = subtractProductAndSum( n);
printf("%d",result);

    return 0;
}
