#include<stdio.h>

void binary_search(int arr[],int n);
int main()
{
//	int n=sizeof(arr)/sizeof(arr[0]);
        int arr[]={1,3,5,7,8,9,12,15};
        int n=sizeof(arr)/sizeof(arr[0]);

        printf("array elements are:\n");
        for(int i=0;i<n;i++)
                printf("%d\n",arr[i]);
        binary_search(arr,n);
}
void binary_search(int arr[],int n)
{
	 int low=0,high=n-1 ,mid,i,key,flag=0;
	printf("enter a key:\n");
	scanf("%d",&key);

	while(low<=high)
	{
		mid=(low+high)/2;
		if(key<arr[mid])
			high=mid-1;

		else if (key>arr[mid])
		
			low=mid+1;
		
		else if(key==arr[mid])
		{
		printf("element found at position = %d\n",mid+1);
	        flag=1;
	 	break;	
		}
	}
	if (flag==0)
		printf("element not found\n");
}

