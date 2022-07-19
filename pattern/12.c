#include<stdio.h>
int main()
{
        int i,j;
        for(i=1;i<=5;i++)
        {
                for(j=1;j<=i;j++)

                {
                        printf("%c",96+i);
                }
                printf("\n");
        }
        return 0;
}
/*
output:
a
bb
ccc
dddd
eeeee
*/

