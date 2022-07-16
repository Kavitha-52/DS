#include<stdio.h>
int main()
{
        int num,pos,toggle;
        printf("enter a number:\n");
        scanf("%d",&num);
        printf("enter a position:\n");
        scanf("%d",&pos);
        toggle=num^(0x01<<pos);
        printf("%d",toggle);
        return 0;
}


