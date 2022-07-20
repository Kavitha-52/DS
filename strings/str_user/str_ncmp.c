#include<stdio.h>
int nstrcmp(char str1[],char str2[],int n)
{
        int i=0,j=0;
        while(i<n)
        {
                if(str1[i]!=str2[i])
                {
                        j=1;
                        break;
                }
                i++;
        }
        if(j==0)
                return 0;
        else
                return 1;
}
int main()
{
        char str1[10],str2[10];
        int n;
        printf("enter the strings:");
          scanf("%s",str1);
        scanf("%s",str2);
        printf("enter the value of n:");
        scanf("%d",&n);
        int k=nstrcmp(str1,str2,n);
        if(k==0)
                printf("strings are same");
        else 
		printf("strings are different");
        return 0;
}

