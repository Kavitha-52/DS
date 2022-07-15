#include<stdio.h>

int main()
{
	int *i, *j;
	i = 0x12345678;//we cant assign values to the pointer
	j = 0x11111111;
	j++;
	printf("%d, %d", *i, j);

}
