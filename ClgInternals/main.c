#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,choice;
	printf("Enter A :");
	scanf("%d",&a);
	printf("\nEnter B :");
	scanf("%d",&b);
	printf("\nChoose Options To Perform : ");
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\n\nEnter Your Choice :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nAddition of A + B is : %d",a+b);
			break;
		case 2:
			printf("\nSubtraction of A - B is : %d",a-b);
			break;
		case 3:

			printf("\nMultiplication of A * B is : %d",a*b);
			break;
		case 4:
			if(b == 0)
			{
				printf("b cannot be 0(Zero) for Division operation");
				break;
			}
			else
			{
				printf("\nDivision of A / B is : %d",a/b);
				break;
			}
		default:
			printf("Invalid Choice");
	}
	return 0;
}
