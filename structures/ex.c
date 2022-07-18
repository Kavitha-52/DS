#include<stdio.h>
union stu
{
	int num;
	char name[20];
};
int main()
{
	union stu s={1,"krish"};
	printf("%d %s",s.num,s.name);
}
