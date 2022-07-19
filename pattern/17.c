#include<stdio.h>
int main()
{
        int i,j;
        for(i=5;i>0;i--)
        {
                for(j=i;j<=5;j++)

                {
                        printf("%c",96+j);
                }
                printf("\n");
        }
        return 0;
}
/*

output:

e
de
cde
bcde
abcde


*/
