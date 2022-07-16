#include<stdio.h>
int main()
{
        int num,pos,clear;
        printf("enter a number:\n");
        scanf("%d",&num);
        printf("enter a position:\n");
        scanf("%d",&pos);
        clear=num&(~(0x01<<pos));
        printf("%d",clear);
        return 0;
}


