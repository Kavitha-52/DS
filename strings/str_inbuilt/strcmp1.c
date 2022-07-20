#include<stdio.h>
#include<string.h>
/*int main()
{
        char name1[10]="kavitha";
        char name2[10]=" honey";
//char x=strcat(name1,name2);
  //   printf("%s\n",x);
 printf("string concatination :%s\n",strcat(name1,name2));
}
*/
int main()
{
        char str1[10];
        char str2[10];
        printf("enter a string1:\n");
        scanf("%s",str1);
        printf("enter a string2:\n");
        scanf("%s",str2);
	if(strcmp(str1,str2)==0)
	{
		printf("strings are equal\n");
	}
	else
		printf("strings are not equal\n");
}


