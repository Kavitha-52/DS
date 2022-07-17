#include <stdio.h>
//#include <string.h>
 
union Data {
   int i;
   float f;
   char str[20];
};
 
int main( ) {

   union Data data;        

   printf( "Memory size occupied by data : %ld\n", sizeof(data));
 data.i=1;
 data.f=12.123;
 data.str[20]="kavitha";
 printf("%d\n",data.i);
 printf("%f\n",data.f);
 printf("%s",data.str);
   return 0;
}
