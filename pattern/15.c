#include<stdio.h>
int main()
{
        int i,j,k;
        for(i=1;i<=5;i++)
        {
		k=97+i;
                for(j=1;j<=i;j++)
		{ 
			k--;
                        printf("%c ",k);
                }
                printf("\n");
        }
        return 0;
}

/*

output:

a 
b a 
c b a 
d c b a 
e d c b a 
*/
