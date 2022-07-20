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
        char source[10];
        char dest[10];
        printf("enter a string1:\n");
        scanf("%s",source);
        printf("enter a string2:\n");
        scanf("%s",dest);
 printf("string copy from source to destination  :%s\n",strcpy(dest,source));
 printf("string copy from destination  to source  :%s\n",strcpy(source,dest));

}
