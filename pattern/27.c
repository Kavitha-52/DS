#include<stdio.h>
int fib(int n)
{
        if(n==0)
		return 0;
	else if(n==1)
                return 1;
	else
                return (fib(n-1)+fib(n-2));
}
int main()
{
        int i,j,n=1;
        for(i=1;i<=5;i++)
        {
                for(j=1;j<=i;j++)
                {
                       printf("%d ",fib(n++));

            }
                printf("\n");
        }

return 0;
}
  
/*
1 
1 2 
3 5 8 
13 21 34 55 
89 144 233 377 610 */
