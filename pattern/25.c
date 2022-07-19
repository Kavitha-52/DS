#include<stdio.h>
int main()
{
  int i,j;
        for(i=1;i<=5;i++)
        {
                for(j=0;j<i;j++)
                {
                        (i%2==0)?printf("%c",96+i):printf("%d",i);
                }
                printf("\n");
        }
        return 0;
}

/*
output:
1
bb
333
dddd
55555
*/
