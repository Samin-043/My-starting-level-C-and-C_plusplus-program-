#include<stdio.h>
int main ()
{
    int num,val,count,equation;
    printf("Enter the number");
    scanf("%d",&num);
    printf("Enter the value");
    scanf("%d",&val);
    printf("Enter the count");
    scanf("%d",&count);

    equation=(count*num)+(88/val)-(19%count);
    printf("Their equation is %d",equation);

    return 0;

}
