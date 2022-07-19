#include<stdio.h>
int main()
{
        for(int i=1;i<=5;i++)
        {
                for(int j=1;j<=i;j++)
		{
			if(i%2!=0)
				
				(j%2!=0)?printf("1"):printf("0");
			else
				(j%2!=0)?printf("0"):printf("1");
		}
                  
                printf("\n");
        }
        return 0;
}

/*
 1
01
101
0101
10101
*/
