#include<stdio.h>
int main()
{
        FILE *fp=fopen("file1.txt","r");
        if(fp)
                printf("File opended successfully\n");
        else
                printf("File opened not successfully\n");
        fclose(fp);
}
