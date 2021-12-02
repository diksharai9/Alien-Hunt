//recursion
#include<stdio.h>
#include<process.h>

void asc_no(int n);
void dec_no(int n);
int sum(int n);
void decimal_binary(int n);
void reverseSentence();
int fib(int n);
int fact(int n);
void towers(int, char, char, char);

int main()
{
	int a,c,r,i;
	char s[10];


	printf("**MENU**\n");
	printf("1.Print n natural Ascending\n");
	printf("2.Print n natural descending\n");
	printf("3.Sum of n natural numbers\n");
	printf("4.Decimal to Binary\n");
	printf("5.String reversal\n");
	printf("6.Fibonacci series\n");
	printf("7.Factorial\n");
	printf("8.Tower of Hanoi\n");
	printf("9.Exit\n");

	while(1)
	{
		printf("\nEnter you choice:\n");
		scanf("%d",&c);

		switch(c)
		{
			case 1:
					printf("Enter the number of terms to be printed\n");
   					scanf("%d", &a);

  					if(a<0)
  					printf("Enter a natural number\n");
  					else
   					{
						printf("Natural Numbers from 1 To %d are:\n", a);
    					asc_no(a);
    				}
    				break;

    		case 2:
    				printf("Enter the number of terms to be printed\n");
   					scanf("%d", &a);

  					if(a<0)
  					printf("Enter a natural number\n");
  					else
   					{
						printf("Natural Numbers from 1 To %d are:\n", a);
    					dec_no(a);
    				}
    				break;

    		case 3:
    				printf("Enter the number of terms you want to add\n");
   					scanf("%d", &a);
					if(a<0)
  					printf("Enter a natural number\n");
  					else
   					{
   						r=sum(a);
						printf("Sum of Numbers from 1 To %d is %d\n",a,r);

    				}
    				break;

    		case 4:
    				printf("Enter a number:\n");
    				scanf("%d", &a);
    				decimal_binary(a);
    				break;

    		case 5:
    				printf("Enter a sentence: ");
                    reverseSentence();
                    break;

    		case 6:
    				printf("Enter the number of terms to be printed in fibonacci series:\n");
   					scanf("%d", &a);
					if(a<0)
  						printf("Enter a natural number\n");
  					else
  					{	printf("Fibonacci series is:\n");
  						for(i=0;i<=a;i++)
  						printf("%d ",fib(i)) ;
  					}
  					printf("\n");
  					break;

			case 7:
					printf("Enter the number  you want to take factorial of:\n");
   					scanf("%d", &a);
					if(a<0)
  					printf("Enter a natural number\n");
  					else
  					{
  						r = fact(a);
  						printf("Fcatorail of the natural %d is: %d\n",a,r);
  					}
  					break;

  			case 8:
  					printf("Enter the number of disks : ");
   					scanf("%d", &a);
   					printf("The sequence of moves involved in the Tower of Hanoi are :\n");
   					towers(a, 'A', 'C', 'B');
   					break;

  			case 9:

  					exit(0);

  			default :
  					printf("Invalid choice\n");

		}


	}
}
void asc_no(int n)
{
	if(n==0)
       	return;

	asc_no(n-1);
    printf("%d ", n);


}
void dec_no(int n)
{
	if(n==0)
       	return;

	printf("%d ", n);
    dec_no(n-1);
}
int sum(int n)
{

	if(n==0)
		return 0;
	return n+sum(n-1);


}
void decimal_binary(int n)
{
	int rem;
	rem=n%2;
	if(n==0)
		return;
	decimal_binary(n/2);
	if(rem<10)
		printf("%d ",rem);

}
void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}
int fib(int n)
{
	if(n==0||n==1)
		return 1;

	return(fib(n-1)+fib(n-2));


}
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return (n*fact(n-1));

}
void towers(int num, char frompeg, char topeg, char auxpeg)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);
        return;
    }
    towers(num - 1, frompeg, auxpeg, topeg);
    printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);
    towers(num - 1, auxpeg, topeg, frompeg);
}
