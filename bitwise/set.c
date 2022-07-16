#include<stdio.h>
int main()
{
	int num,pos,set;
	printf("enter a number:\n");
	scanf("%d",&num);
	printf("enter a position:\n");
	scanf("%d",&pos);
	set=num|(0x01<<pos);
	printf("%d",set);
	return 0;
}
	
