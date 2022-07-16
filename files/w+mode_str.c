#include<stdio.h>
int main()
{
        FILE *fp=fopen("string.txt","w+");
        if(fp)
                printf("File opended successfully\n");
        else
                printf("File opened not successfully\n");

      char str[10]="kernel";
      char str1[10];
      fputs(str,fp);
      rewind(fp);
      fgets(str1,3,fp);
       printf("%s\n",str1);
        fclose(fp);
}
