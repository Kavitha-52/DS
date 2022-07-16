#include<stdio.h>
void duplicate(int arr[]);
int main()
{
int arr[]={1,2,3,4,5,6,1,2,3,4};
int n=sizeof(arr)/sizeof(arr[0]);
duplicate(arr);
//printf("dupliactes elements in an array are :%d\n",res);
return 0;
}
void duplicate(int arr[])
{
int i,j,n;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]==arr[j])
printf("dupliacte elements are:%d\n",arr[j]);
}
}
}
