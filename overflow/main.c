#include <stdio.h>
#include <stdlib.h>
#define INT_MAX 2147483647
#define INT_MIN (-2147483648)
int reverse(int n);
int main()

{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int result = reverse(n);
    printf("the result is %d",result);

    return 0;
}
int reverse(int n)
{

    while(n>=0){
            int reverse = 0;
      int  lastDigit = n%10;
      reverse  = (reverse)+lastDigit;
      n = n/10;
    }
    printf("the reverse of the number is:%d",reverse);
      if((reverse<=INT_MAX)&&(reverse>=INT_MIN))
      {
          return reverse;
      }
      else if((reverse>=INT_MIN) &&(reverse<=INT_MAX))
        return reverse;
     // else if()
       // return 0;
      else
        return 0;



}
