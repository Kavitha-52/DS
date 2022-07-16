#include<stdio.h>
int uniq_element(int arr[])
{
int i,res;
int *p=arr;
res=*(p+0);

for(i=1;i<7;i++)
{
res=res ^ *(p+i);
}
return res;
}
int main()
{
int arr[7]={1,2,3,4,1,2,3};
int x=uniq_element(arr);
printf("unique element is %d\n",x);
}
