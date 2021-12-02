
#include<stdio.h>

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
int main()
{
    int num, prod;
    printf("Enter a number: ");
    scanf("%d", &num);
    prod = getProduct(num);
    printf("%d", prod);
    return 0;
}
