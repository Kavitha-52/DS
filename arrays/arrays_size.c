#include<stdio.h>
int main()
{
        int arr1[5]={};
         int arr2[10]={2,4,5,6,7,3};
        int arr3[3]={1,2,3,4,5};
      int arr4[0]={};
     int arr5[0]={1,2,3,4,5};
     int arr6[]={};
    int arr7['a'];
    printf("%lu %lu %lu %lu %lu %lu %lu",sizeof(arr1),sizeof(arr2),sizeof(arr3),sizeof(arr4),sizeof(arr5),sizeof(arr6),sizeof(arr7));
                    }


