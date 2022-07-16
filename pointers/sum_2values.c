#include<stdio.h>
int main()
{
        int a,b,*p1,*p2,sum;
        printf("enter the values of a and b:\n");
        scanf("%d%d",&a,&b);
       p1=&a;
        *p1=a;
        p2=&b;
        *p2=b;
        sum=*p1+*p2;
        printf("sum:%d\n",sum);
        return 0;
}

