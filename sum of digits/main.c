#include <stdio.h>
#include <stdlib.h>
int ProductSum(int n);
int getProduct(int num);
int main()
{
    int n,result,prod,sum;
    printf("enter a number ");
    scanf("%d",&n);
    sum = ProductSum(n);
    prod = getProduct(n);
    result = prod -sum;
    printf("the result is %d",result);
    return 0;
}
int ProductSum(int n){
int sum = 0;
while(n!=0){
    sum = sum+n%10;
    n = n/10;
}

return sum;
}
int getProduct(int num)
{
    int prod = 1,rem;
    while(num != 0)
    {
        rem = num % 10; // get the last-digit
        prod *= rem; // calculate product of digits
        num /=  10;  // remove the last digit
    }
    return prod;
}
