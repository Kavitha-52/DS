#include<stdio.h>
int main()
{
        FILE *fp=fopen("file.txt","a");
        if(fp)
                printf("File opended successfully\n");
        else
                printf("File opened not successfully\n");
      char c;
      	fputc(' ',fp);
      	fputc('h',fp);
	fputc('i',fp);
	fputc('i',fp);
	

      //while((c=fgetc(fp))!=EOF)
        //      printf("%c\n",c);
        fclose(fp);
}  
