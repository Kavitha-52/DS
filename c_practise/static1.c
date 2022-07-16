#include<stdio.h>
int main()
{
	int *ptr;
{
	static int a=1;
	printf("%d\n",a);
	ptr=&a;
}
	printf("%d\n",*ptr);
	}
