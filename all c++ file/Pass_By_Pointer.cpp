#include<stdio.h>
void passByPointer(int *p)
{
    printf("The value has got %d\n",*p);
    *p=30;
    printf("After the value is %d\n",*p);
}


int main()
{
    int p=20;
    printf("The value is %d\n",p);
    passByPointer(&p);
}
