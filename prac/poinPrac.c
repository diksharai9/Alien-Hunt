#include <stdio.h>
#include <stdlib.h>

struct student{
    char name;
    int age;

};
void keyVal(char* name,int* age){
scanf("%c %d",name,age);
}

//own function to print structure
//void print(char name[],int age,int roll,float marks){
  //  printf("%s\n%d\n%d\n%.2f",name,age,roll,marks);
//}
int main()
{
   struct student s1;
   keyVal(&s1.name,&s1.age);
   printf("%c %d",s1.name,s1.age );
    return 0;
}
