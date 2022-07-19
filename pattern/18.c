#include<stdio.h>
int main()
{
        int i,j,k=96;
        for(i=1;i<=5;i++)
        {
                for(j=1;j<=i;j++)
                {
                        k=k+1;

                        printf("%c ",k);
                }
                printf("\n");
        }
        return 0;
}

/*
 
output:

a
b c
d e f
g h i j
k l m n o

*/
