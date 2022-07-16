#include<stdio.h>
int add(int a,int b);// function declarations
int sub(int a,int b);
int mul(int a,int b);
int main()
{
int a,b,x;
printf("enter a,b values\n");
scanf("%d %d",&a,&b);
int (*fun[3])(int,int);  
fun[0]=add; 
fun[1]=sub;  
fun[2]=mul;    
printf("add sub mul\n");
for(int i=0;i<3;i++)
{
	x=fun[i](a,b);
printf("%d\n",x);  
}
}

int add(int a,int b) 
{
 return a+b; 

}

int sub(int a,int b) 
{
return a-b;  
}

int mul(int a,int b) 
{
return a*b;    

}
