#include<stdio.h>
void nstr_cpy(char d[],char s[],int n1);
        int main()
{
        int n,n1;
        char s[10],d[10];
      //  printf("enter the string size");
       // scanf("%d",&n);
       printf("enter the string name:\n");
       scanf("%s%s",s,d);
        printf("enter how many no.c copied:\n");
       scanf("%d",&n1);
       nstr_cpy(d,s,n1);
}
void nstr_cpy(char d[],char s[],int n1)
{
        int i;
        for(i=0;i<n1&&s[i]!='\0';i++)
        {
                d[i]=s[i];
        }
        printf("%s",d);
}

