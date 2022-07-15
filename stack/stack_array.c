#include<stdio.h>
#include<stdlib.h>

#define N 8
int stack[N];
int top=-1;
void push(int ele)
{
	int x;

	if(top==N-1)
		printf("stack is full\n");
	else
	{
		top++;

		stack[top]=ele;
	}
}

void get_min()
{
	int i,min=top;
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		for(i=0;i<=top;i++)
		{
		if(stack[i]<min)
			min=stack[i];
		}
		printf("minimum element is :%d\n",min);
	}
}

void pop()
{
	int item;
	if(top==-1)
		printf("stack is empty\n");
	else
	{
		item=stack[top];
		top--;
		printf("poped element is :%d\n",item);
	}
	get_min(top);
}



void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("pushed element is: %d\n",stack[i]);
	}
}
void main()
  {
  push(7);
  push(33);
  push(5);
  push(10);
  push(3);
  push(100);
  push(25);   
  display();
  pop();
  display();
  pop();
  display();
  
  
  }
 /*
void main()
{
	int ch;
	do
	{
		printf("enter choice:1)push 2)pop 3)display 4)exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			       break;
			case 2:pop();
			       break;
			case 3:display();
			       break;
		        case 4:exit(0);
			default:printf("Invalid choice");
		}
	}while(ch!=0);
	scanf("%d",&ch);
}*/
