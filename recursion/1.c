#include<stdio.h>
int sum(int x);
int main()
{
	int x;
	printf("enter a number:\n");
	scanf("%d",&x);
	printf("sum is %d",sum(x));
}
int sum(int n)
{
	if(n!=0)
		return n + sum(n-1);
	else
		return n;
}
