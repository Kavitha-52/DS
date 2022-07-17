/*#include<stdio.h>
struct padding
{
    char a;
    char b;
    int c;
};
int main()
{
    struct padding s;
    printf("with structure padding :%ld\n",sizeof(s));
}
*/
#include<stdio.h>
#pragma pack(1)
struct padding
{
    char a;
    char b;
    int c;
};
int main()
{
    struct padding s;
    printf("without structure padding:%ld",sizeof(s));
}
