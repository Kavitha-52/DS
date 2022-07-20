#include<stdio.h>
#include<string.h>
int  main()
{
        char name[10];
        printf("enter a string:\n");
        scanf("%s",name);
        printf("%s",name);
	printf("%d\n",strlen(name));
       printf("string upper:%s",strlwr(name));
return 0;
}


