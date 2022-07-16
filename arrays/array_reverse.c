#include<stdio.h>
int main()
{
        int a[5],i,n;
        printf("enter the size of the array:");
        scanf("%d",&n);
        printf("enter elements of the array:");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("after reverse array elements are:");
        for(i=n-1;i>=0;i--)
	printf(" %d\t",a[i]);
}
       

