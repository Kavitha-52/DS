#include<stdio.h>
int main()
{
        FILE *fp=fopen("file.txt","w+");
        if(fp)
                printf("File opended successfully\n");
        else
                printf("File opened not successfully\n");

      int i;
        putw(100,fp);
        putw(200,fp);
        putw(300,fp);
        rewind(fp);
      while((i=getw(fp))!=EOF)
              printf("%d\n",i);
        fclose(fp);
} 
