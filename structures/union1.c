#include <stdio.h>
union student
{
int rollno;
   float marks;
   char name[20];
};
int main() 
{
  union student s={1,23.3,"kavitha"};
   //printf("enter student name rollno & marks:\n");
   //scanf(" %d %f %s", &s.rollno,&s.marks,s.name);
   printf("student name = %s\n", s.name);
   printf("student rollno = %d\n", s.rollno);
   printf("student marks=%f\n",s.marks);
   return 0;
}
