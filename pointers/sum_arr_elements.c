#include<stdio.h>
int  fun(int arr[]);

 int main()
{
	int arr[]={2,2,3,4,5,6,7};
	int res=fun(arr);
	printf("sum of array elements are:%d\n",res);
}
int fun(int arr[])
{
	int sum=0;
	int *ptr;
	ptr=arr;
	for(int i=0;i<7;i++)
	{
       	sum=sum+*(ptr+i);	
	}
	return sum;
	
}
