#include<stdio.h>
int main()
{
        FILE *fp=fopen("file.txt","w");
        if(fp)
                printf("File opended successfully\n");
        else
                printf("File opened not successfully\n");
        int i;
      	putw(10,fp);
        putw(20,fp);
	putw(30,fp);
	putw(40,fp);
	putw(50,fp);

    
        fclose(fp);
}  
