#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    if(num%2==0&&num/4==0)
        printf("Even");
    else if(num%2==1&&num/3==0)
        printf("Odd");
    else
        printf("no number");

    return 0;

}

