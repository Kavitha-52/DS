#include<stdio.h>  
typedef struct employee
{
	int ID;
	int age;
	char name[100];
	char com[100];
}E;
//E emp={210355,22,"kavitha","ThunderSoft"};
void fun(E *);
int main()
{
	E emp={210355,22,"kavitha","ThunderSoft"};
	fun(&emp);
	return 0;
}

void fun(E *stu)
{
	printf("Employee details:\n");
	printf("ID:%d\n",stu->ID);
	printf("Age:%d\n",(*stu).age);
	printf("Name:%s\n",stu->name);
	printf("Company_Name:%s\n",stu->com);
}
