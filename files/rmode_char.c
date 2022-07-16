#include<stdio.h>
int main()
{
        FILE *fp=fopen("file.txt","r");
        if(fp)
                printf("File opended successfully\n");
        else
                printf("File opened not successfully\n");
      char c;
      	fputc('h',fp);
      	fputc('e',fp);
	fputc('l',fp);
	fputc('l',fp);
	fputc('o',fp);

      while((c=fgetc(fp))!=EOF)
              printf("%c\n",c);
        fclose(fp);
}  
