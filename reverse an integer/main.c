#include <stdio.h>
#include <stdlib.h>

char reverse(int x){
     int reverse = 0;
    while(x>0)
    {
       int lastdigit = x%10;
        reverse =(reverse*10)+lastdigit;
        x = x/10;

    }
    char true="true";
    char false = "false";
    if(reverse =x)
        return true;
    else
        return false;

}

int main()
{

int result,x;
printf("enter a number: ");
scanf("%d",&x);

printf("%s",reverse(x));
    return 0;
}
