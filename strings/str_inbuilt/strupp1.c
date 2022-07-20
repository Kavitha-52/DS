#include<stdio.h>
#include<string.h>
int  main()
{
        char name[10];
        printf("enter a string:\n");
        scanf("%s",name);
	printf("%s",name);
	 printf("string upper:%s",strupr(name[10]));
return 0;
} 

