#include<stdio.h>
int main()
{
    int n=10,arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr1;
    int *ptr2;

   printf("Address of n %u\n",&n);

    ptr1=&n;
    ptr2=&arr;

    printf("Address of n %u\n",&ptr1);
    printf("The number is %d\n",++(*ptr1));
    printf("The number is %d\n",*(++ptr2));
    return 0;
}
