#include<stdio.h>
int lar(int arr[])
{
    int i, largest;
    largest=arr[0];
    for(i=1;i<6;i++)
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
	for(i=1;i<6;i++)
	{
		if(arr[i]<small)
			small=arr[i];
	}
	return small;
}

int  main()
{
    int  l,s,i,arr[6]={10000,10,9,8,4,90};
    int (*fun)(int arr[])=lar;
    l=fun(arr);
     printf("lagest element :%d\n",l);
     int (*fun1)(int arr[])=smallest;
     s=fun1(arr);
     printf("smallest element :%d\n",s);
}
