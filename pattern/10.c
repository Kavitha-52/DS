#include<stdio.h>
int main()
{
        int i,j,k=1;
        for(i=1;i<=5;i++)
        {
                for(j=1;j<=i;j++)
                {
                        if(i%2!=0)
			{
				printf("%d",k);
			}
			else
				printf("*");
		}
	if(i%2!=0)
	{	
            k=k+1;
         }
                printf("\n");
        }
        return 0;
}


