#include<stdio.h>
int main()
{
        int i,j,no=0;
        for(i=1;i<=5;i++)
        {
                for(j=1;j<=i;j++)
                {
			no++;
                        printf("%d ",no);
                }
                printf("\n");
        }
        return 0;
}
/*
output:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

