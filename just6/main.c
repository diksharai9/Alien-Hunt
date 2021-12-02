#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<process.h>
#define max 100
struct stack{
char arr[max];
int top;
};
int isempty(struct stack *ptr){
	if(ptr->top == -1){
		return 1;
	}
	else{
		return 0;
	}
}
int isfull(struct stack *ptr){
	if(ptr->top == max-1){
		return 1;
	}
	else{
		return 0;
	}
}
void push(struct stack *ptr,char val){
	if(isfull(ptr)){
		printf("Stack overflow");
	}
	else{
		++ptr->top;
		ptr->arr[ptr->top] = val;
	}
}
char pop(struct stack *ptr){
	if(isempty(ptr)){
		printf("Stack underflow");
	}
	else{
		char val = ptr->arr[ptr->top];
		--ptr->top;
		return val;
	}
}

int match(char a,char b){
	if(a=='{'&&b=='}')
	  return 1;
	if(a == '['&& b ==']')
	  return 1;
    if(a== '('&&b == ')')
	  return 1;
	else
	  return 0;
}
int isbalanced(char *exp){
	struct stack *s;
	s->top = -1;
	s->arr[max];
	int i;
	char temp;
	for(i=0;i<strlen(exp);i++){
		if(exp[i]=='('|| exp[i] == '{'|| exp[i] =='['){
		    push(s,exp[i]);
		}
		else if(exp[i] ==')'||exp[i] == '}'||exp[i] == ']'){
			if(isempty(s)){
				printf("Right paranthesis are more than the left paranthesis\n");
				return 0;
			}
			else{
				temp = pop(s);
				if(!match(temp,exp[i])){
					printf("Mismatched paranthesis are: ");
					printf("%c and %c \n",temp,exp[i]);
					return 0;
				}
			}
		}
		if(isempty(s)){
			printf("Balanced paranthesis\n");
			return 1;
		}
		else{
			printf("Left paranthesis is more than the right paranthesis\n");
			return 0;
		}
}
}
void main(){
	char exp[max];
	int valid;
	printf("Enter an algebraic expression: ");
	gets(exp);
	valid = isbalanced(exp);
	if(valid == 1)
	   printf("Valid expression");
	else
		printf("Invalid expression");
}
