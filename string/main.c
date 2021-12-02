#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char str[10];
   printf("enter the string: ");
   gets(str);
  for(i=0;i<10;i++)
  {
      if(str[i]="a"||"e"||"i"||"o"||"u"){
        printf("%c\n",str[i]);
      }
  }

    return 0;
}
