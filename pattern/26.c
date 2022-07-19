#include<stdio.h>
int main()
{
  int i,j;
        for(i=1;i<=5;i++)
        {
                for(j=0;j<i;j++)
                {
                        (i%2==0)?printf("%d ",i):printf("%c ",96+i);
                }
                printf("\n");
        }
        return 0;
}
/*
output:
a
2 2
c c c
4 4 4 4
e e e e e

*/
