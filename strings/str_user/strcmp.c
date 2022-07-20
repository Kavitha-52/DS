#include<stdio.h>
int  mystrcmp(char s1[],char s2[]);
int main()
{
        int i;
 char s1[10] ,s2[10];
 printf("enter the string name:\n");
 scanf("%s %s",s1,s2);
 i=mystrcmp(s1,s2);
 if(i==0)
         printf("strings are equal");
 else if(i>0)
         printf("string 1 greater:%d\n",i);
 else
         printf("string2 greater:%d\n",i);
}
int  mystrcmp(char s1[],char s2[])
{
        int i=0,j=0;
       while(s1[i]!='\0'&& s2[j]!='\0')
        {


                 if(s1[i]>s2[j])
                return s1[i]-s2[j];
                 else if(s1[i]<s2[j])
                 return s1[i]-s2[j];
                i++;
                j++;
                 }

       return s1[i]-s2[j];
}

