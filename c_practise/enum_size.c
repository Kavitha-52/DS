#include <stdio.h>
  enum days {sunday,monday,tuesday};
   enum month {jan,feb,march};

int main()
{
 
   printf("size of enum days:%ld\n",sizeof(enum days));
   printf("size of enum month:%ld\n",sizeof(enum month));
   return 0;

}
