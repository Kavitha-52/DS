#include<stdio.h>
 
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
enum year{Jan, Feb, Mar, Apr, May, Jun, Jul,
          Aug, Sep, Oct, Nov, Dec};
/*
int main()
{
    enum week day;
    day = Wed;
    printf("%d",day);
   return 0;
}
enum year{Jan, Feb, Mar, Apr, May, Jun, Jul,
          Aug, Sep, Oct, Nov, Dec};
int main()
{
int i;
   for (i=Jan; i<=Dec; i++)
      printf("%d ", i);

   return 0;
}*/

int main()
{
    enum week day;
    day = Wed;
    printf(" day :%d\n",day);
 
int i;
printf("months are:\n");
   for (i=Jan; i<=Dec; i++)
      printf("%d ", i);
   return 0;
}

