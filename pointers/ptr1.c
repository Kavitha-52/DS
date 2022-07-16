#include<stdio.h>
/*int main()
{
int a=10,b=20,c;
int *p,*q;
p=&a;
q=&b;
printf("value of a:%d\n",a);
printf("value of a :%d\n",*p);
printf("address of a =%p\n",&a);
printf("address of a =%p\n",p);
printf("address of a =%p\n",&p);
}

o/p:
value of a:10
value of a :10
address of a =0x7fff21e839b0
address of a =0x7fff21e839b0
address of a =0x7fff21e839b8




int main()
{
int a=10,b=20,c;
int *p,*q;
p=&a;
q=p;
printf("a=%d %d %d",a,*p,*q);
}


o/p: a=10 10 10
*/

int main()
{
int a[5]={1,2,5,9,4};
int *p=&a[0];
printf("value=%d\n",*p); //1
printf("addess of element is :%p\n",p);//base address
p=p+2;//1000+2(4)=1008
printf(" value is =%d\n",*p);
printf(" value is =%d\n",*p+1);
printf(" value is =%d\n",*(p+1));

printf("address of element is=%p\n",p);
}

/*o/p:
value=1
addess of element is :0x7fffc4de4960
 value is =5
 value is =6
value is =9
address of element is=0x7fffc4de4968*/

