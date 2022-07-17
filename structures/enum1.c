#include <stdio.h>  
 enum weekdays{Sunday=1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};  
 int main()  
{  
 enum weekdays w; // variable declaration of weekdays type  
 w=Monday;
enum weekdays x=Friday;
printf("the value of x is %d\n",x); 
 printf("The value of w is %d\n",w);
printf("value is %d\n",w+1); 
    return 0;  
}
