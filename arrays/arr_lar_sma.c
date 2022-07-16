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
 	 int i,largest;
	largest=arr[0];  
	for(i=0;i<7;i++)
	{
       	if(arr[i]>largest)
      
      	 	largest=arr[i];	
	}
	return largest;
	
}
int smallest(int arr[])
{
 	 int i,small;
	small=arr[0];  
	for(i=0;i<7;i++)
	{
       	if(arr[i]<small)
      
      	 	small=arr[i];	
	}
	return small;
	
}*/


int main()
{
int a[5]={1,2,3,9,4};
int *p=&a[0];
printf("value=%d\n",*p); //1
printf("addess of element is :%p\n",p);//base address
p=p+2;//1000+2(4)=1008
printf(" value is =%d\n",*p);//3
printf("address of element is=%p\n",p);
}
