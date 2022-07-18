#include<stdio.h>
void linear_search(int arr[]);
int main()
{
	int arr[8]={1,5,2,3,8,7,9,4};
	printf("array elements are:\n");
	for(int i=0;i<8;i++)
		printf("%d\n",arr[i]);
	linear_search(arr);
}
void linear_search(int arr[])
{
	int search;
	printf("enter a searched element:\n");
	scanf("%d",&search);
	for(int i=0;i<8;i++)
	{
	if(arr[i]==search)
	{
		printf("element found at index %d\n",i);
		break;
	}
	}
	printf("element not found\n");
}
