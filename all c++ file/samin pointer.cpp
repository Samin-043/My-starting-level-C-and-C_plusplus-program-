#include<stdio.h>

int main()
{
    int *p,q;
    q=7;
    p=&q;
    printf("The address of q is %d",p);
    *p=10;
    printf("The address of Q is %d\n",p);
    printf("The value of Q by pointer is %d\n",*p);
    printf("The value of Q is %d\n",q);
    return 0;
}
