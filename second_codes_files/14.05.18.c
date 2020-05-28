#include<stdio.h>
int main(void)
{
    int n1,n2,n3,n4,num,sum;
    printf("Enter three digit integer number\n");
    scanf("%d",&num);
    n1=num/100;
    n2=num%100;
    n3=n2/10;
    n4=n2%10;

    sum=((n1*n1*n1)+(n3*n3*n3)+(n4*n4*n4));
    if (sum=num)
    printf("The armstrong number\n");
    else
    printf("Not armstrong\n");

    return 0;


}
