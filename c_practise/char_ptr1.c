#include <stdio.h>

int main()
{
   char *p = "hello";
  // p[1]='1'; // we cant modify character seperately so it will give runtime error
     p="hii"; // we can assign new string to the ptr is possible so,it  works
   printf("%s\n",p);

   return 0;
}
