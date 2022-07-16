#include<stdio.h>
int main()
{
        int num,pos,checkbit;
        printf("enter a number:\n");
        scanf("%d",&num);
        printf("enter a position:\n");
        scanf("%d",&pos);
        checkbit=num&(0x01<<pos);
	if(checkbit)
		printf("%d at %d = ON\n",num,pos);
	else
		printf("%d at %d = OFF\n",num,pos);
      
        return 0;
}

