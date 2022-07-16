#include<stdio.h>
void number()
{
//	int num=0;//every time it will initiase to 0
static int num=0;//in this only 1 time it will assgin afterthat it will ignore
num++;
printf("%d\n",num);
}
int main()
{
int i=5;
	while(i--)
		number();

}
