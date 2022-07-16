#include<stdio.h>
int  lar(int arr[]);
int  smallest(int arr[]);
 int main()
{
	int arr[]={112,245,-3,4,5,6,7};
	int res=lar(arr);
	int res1=smallest(arr);
	printf("the largest element of array is:%d\n",res);
	printf("the smallest element of array is:%d\n",res1);
}
int lar(int arr[])
{
 	 int i,largest, *ptr1=arr;
	largest=*(ptr1+0);  
	for(i=0;i<7;i++)
	{
       	if(*(ptr1+i)>largest)
      
      	 	largest=*(ptr1+i);	
	}
	return largest;
}
int smallest(int arr[])
{
 	 int i,small,*ptr2=arr;
	small=*(ptr2+0);  
	for(i=0;i<7;i++)
	{
       	if(*(ptr2+i)<small)
      
      	 	small=*(ptr2+i);	
	}
	return small;
	
}	
