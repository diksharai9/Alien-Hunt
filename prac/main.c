#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[20];
    int age;

};
//void keyVal(char* name,int* age){
//scanf("%c %d",name,age);
//}

//own function to print structure
void print(struct student *s){
    printf("%s %d\n", s->name, s->age);
}
int main()
{
   struct student s1={"Diksha",20};
   print(&s1);

   //printf("%c %d",s1.name,s1.age );
    return 0;
}
