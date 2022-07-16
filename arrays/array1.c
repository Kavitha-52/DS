#include<stdio.h>
/*
int main()
{
	int arr[6]={1,2,3,4,56,10};
	for(int i=0;i<6;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("address are :%p\n",arr);
	printf("%p\n",arr+1);
	printf("%p\n",arr+2);
	printf("%p\n",arr+3);
	printf("%p\n",arr+4);
	printf("%p\n",arr+5);

	printf("values are:%d\n",*(arr));
	printf("%d\n",*(arr+1));
	printf("%d\n",*(arr+2));
	printf("%d\n",*(arr+3));
	printf("%d\n",*(arr+4));
	printf("%d\n",*(arr+5));
	
return 0;
}*/

int main()
{
        int arr[6]={1,2,3,4,56,10};
        for(int i=0;i<6;i++)
        {
                printf("value is:%d\n",arr[i]);
		printf("value is :%d\n",*(arr+i));
		 printf("address %p\n",arr+i);

	}
return 0;
}
