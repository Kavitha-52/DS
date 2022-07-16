#include<stdio.h>

int main()
{
	int a[5]={1,2,3,4,5};
	int *p=&a[0];
	printf("value is:%d\n",*p);
	printf("addres of a :%p\n",p);
	p=p+1;
	printf("value :%d\n",*p);
	printf("address of a :%p\n",p);
	return 0;
}


/*
 
o/p:
value is:1
addres of a :0x7ffc55cd61e0
value :2
address of a :0x7ffc55cd61e4




void  main()
{
	int a[]={3,2,67,0,56};
	int *p;
	p=a;
	printf("%d %d\n",*(p++),*p++);
	printf("%d\n",*p);
       printf("%d\n",*++p);
       printf("%d\n",*(++p));
       printf("%d\n",*p--);
       printf("%d\n",*--p);
}

o/p:
2 3
67
0
56
56
67

*/


/*
int main()
{
	int a[]={10,11,-1,56,67,5,4};
       int *p,*q;
       p=a;
       q=&a[0]+3;
       printf("%d\n",*p);
       printf("%d,%d,%d\n",(*p)++,(*p)++,*(++p));
       printf("%d\n",*p);
       printf("%d\n",(*p)++);
       printf("%d\n",(*p)++);
       q--;
       printf("%d\n",(*(q+2))++);
       printf("%d\n",*q);
       printf("%d\n",*(p+2)-2);
       printf("%d\n",*(p++ -2)-1);
       return 0;
}
o/p:
10
12,11,11
13
13
14
67
-1
54
32764*/


/*
#include<stdio.h>
int main()
{
int a[]={1,12,13,4,15,16,27,18,19,10};
int *p,*q;
p=a;
printf("%d %d %d %d\n",*p,(*p)++,*p++,*++p);// 13 14 12 12  (*p)++ = *p++ both are same
q=p;
printf("%d\n",*q);//13
p=p+1;
q=p;
printf("%d\n",*q);//4
}


o/p:
14 13 12 12
14
4
*/

/*
int main()
{
int a[5]={1,2,3,4,5},d;
int *p=&a[0];
int *q=&a[3];
printf("value=%d\n",*p); //1
printf("addess of element is :%p\n",p);//base address
printf("value=%d\n",*q); //4
printf("addess of element is :%p\n",q);
p=p+2;//1000+2(4)=1008
printf(" value is =%d\n",*p);//3
printf("address of element is=%p\n",p);//1008
printf("q-p=%ld\n",q-p);
printf("p-q=%ld\n",p-q);
}
  

o/p:

value=1
addess of element is :0x7fff2d836500
value=4
addess of element is :0x7fff2d83650c
 value is =3
address of element is=0x7fff2d836508
q-p=1
p-q=-1
*/



/*
int main()
{
int a[]={10,20,30,40,50,60,70,80};
int *p;
p=a;
printf("address of p=%p\n",p);
printf("value=%d\n",*p);
p+1;//it will increment of 4 bytes but it will not return to ptr
printf("address of p=%p\n",p);
printf("value=%d\n",*p);
p++;//p=p+1; it will increment and return to the ptr
printf("address of p=%p\n",p);
printf("value=%d\n",*p);//20

printf("value=%d\n",*(p++));//returns 20 after that increment so ptr pointing to next address
printf("value=%d\n",*p);//20
printf("address of p=%p\n",p);
printf("value=%d\n",*p);//30
printf("value=%d\n",*++p);//40
printf("value=%d %d %d\n",*p,*p++,*p++);
printf("value=%d\n",*p--);//60
printf("value=%d\n",*p);
printf("value=%d\n",*--p);
}

o/p:

address of p=0x7ffcaf715790
value=10
address of p=0x7ffcaf715790
value=10
address of p=0x7ffcaf715794
value=20
value=20
value=30
address of p=0x7ffcaf715798
value=30
value=40
value=60 50 40
value=60
value=50
value=40
*/
