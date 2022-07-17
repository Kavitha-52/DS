#include <stdio.h>
union student
{
   char name[20];
   int rollno;
   float marks;
};
int main() 
{
  union student s;
   printf("enter student name rollno & marks:\n");
   scanf("%s %d %f",s.name, &s.rollno,&s.marks);
   printf("student name = %s\n", s.name);
   printf("student rollno = %d\n", s.rollno);
   printf("student marks=%f\n",s.marks);
   return 0;
}
