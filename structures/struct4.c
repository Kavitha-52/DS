/*#include<stdio.h>
struct student
{
    char name[20];
    int ID;
    int marks;
};

void fun(char name[],int ID,int marks);

int main()
{
    struct student stu;
    printf("Enter student name, Id, marks:\n");
    scanf("%s %d %d",stu.name,&stu.ID,&stu.marks);
    fun(stu.name, stu.ID, stu.marks);
    return 0;
}

void fun(char name[],int ID,int marks)
{
    printf("Name: %s\n",name);
    printf("Roll no: %d\n",ID);
  printf("Marks: %d\n",marks);
  }*/


#include <stdio.h>
struct student
{
 int id;
 char name[20];
 float marks;
};

void func(struct student stu);
int main()
{
struct student stu;
printf("Enter student name,student id,student marks:\n");
scanf("%s %d %f",stu.name,&stu.id,&stu.marks);
func(stu);
return 0;
}
/*
void func(struct student *stu)
{
       printf("ID:%d\n",stu->id);
          printf("Name:%s\n",stu->name);
          printf("Marks:%f\n",stu->marks);
}
*/
void func(struct student stu)
{
       printf("ID:%d\n",stu.id);
          printf("Name:%s\n",stu.name);
          printf("Marks:%f\n",stu.marks);
}



