#include<stdio.h>
int main(void)
{
    int num,sum=0,prod;
    sum=0;
    prod=1;
    for(num=1;num<6;num++)
    {
        sum=sum+num;
        prod=prod*num;

    }
    printf("sum=%d\n\nproduct=%d\n\n",sum,prod);
    return 0;
}
