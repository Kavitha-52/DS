#include<stdio.h>


int main()
{
	char *c = "hello";
	char cr[] = "hello";

	c = "world";	// we can assign a new string to the char ptr-->so it will work
	//cr = "world"; //  we can't assign a new string to char array-->it will compilation error
	printf("%s\n",c);
	printf("%s\n",cr);
}
