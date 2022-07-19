#include<stdio.h>
int main()
{
        for(int i=5;i>=1;i--)
        {
                for(int j=5;j>=i;j--)

                {
                        printf("%c",96+i);
                }
                printf("\n");
        }
        return 0;
}

/*
 output:


e
dd
ccc
bbbb
aaaaa


*/
 
