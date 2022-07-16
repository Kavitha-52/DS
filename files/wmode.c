#include<stdio.h>
int main()
{
	FILE *fp=fopen("file.txt","w");
	if(fp)
		printf("File opended successfully\n");
	else
		printf("File opened not successfully\n");
	fclose(fp);
}
