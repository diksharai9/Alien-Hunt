#include <stdio.h>
#include <stdlib.h>
#define MAX 4
struct node{
    int data;
    struct node *link;
};


int main()
{
    struct node *head=NULL;
    head = (struct node*)malloc(sizeof(struct));
    head ->data=45;
    head ->link=NULL;

    return 0;
}
