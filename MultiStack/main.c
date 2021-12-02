#include<stdio.h>
#include<conio.h>
#define MAX_X 5
#define MAX_Y 6
int topx=-1;
int topy=10;


void push_x(int *stack)
{
	int info;

	if(topx>=(MAX_X-1))
	{	printf("\n\nStack OverFlow");
		return;
	}
	else
	{	printf("\n\nEnter The info To Push");
		scanf("%d",&info);
		topx++;
		stack[topx]=info;
	}}

void push_y(int *stack)
{
	int info;

	if(topy<=(MAX_Y))
	{
		printf("\n\nStack OverFlow");
		return;
	}
	else
	{
		printf("\n\nEnter The info To Push");
		scanf("%d",&info);
		topy--;
		stack[topy]=info;
	}
}

void pop_x(int *stack)
{	if(topx==-1)
	{
		printf("Stack X is Underflow");
		return;
	}
	else
	{
	  printf("Item Poped from stack X is:%d\n",stack[topx]);

	  topx--;
	}
}

void pop_y(int *stack)
{	if(topy==10)
	{printf("Stack y is Underflow");
	return;
	}
	else
	{ printf("Item Poped from stack Y is:%d\n",stack[topy]);
	  topy++;
	}}

void display_x(int *stack)
{
	int i;
	if(topx==-1)
	{
		printf("Stack X is Empty");
		return;
	}
	else
	{ for(i=topx;i>=0;i--)
	   {printf("%d,",stack[i]);}
	   printf("\n");
	}}

void display_y(int *stack)
{
	int i;
	if(topy==10)
	{printf("Stack Y is Empty");
		return;}
	else
	{for(i=topy;i<=9;i++)
	   {
		printf("%d,",stack[i]);
	   }
	   printf("\n");
	}	}

main()
{	int choice;
	char ch;
	int stack[MAX_X+MAX_Y];
do
	{   printf("1.Push_X\n2.Push_Y\n");
		printf("\n3.Pop_X\n4.Pop_Y\n");
		printf("\n5.Display_X\n6.Display_Y\n");
		printf("\n7.Exit");
		printf("\n\nEnter Choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push_x(stack);break;
			case 2: push_y(stack);break;

			case 3: pop_x(stack);break;
			case 4: pop_y(stack);break;

			case 5: display_x(stack);break;
			case 6: display_y(stack);break;
			case 7: break;
			default: printf("Wrong Option...");
		}
	}while(choice!=7);
}
