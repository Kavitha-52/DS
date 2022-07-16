#include<stdio.h>
void add();
//int a=20;
int main()
{
	int a=10;// auto variable has life time within the blolck
	printf("%d\n",a);
	add();
}
void add()
{
	extern int a;
	printf("%d\n",a);//20-->this a takes global value
}
int a=20;
