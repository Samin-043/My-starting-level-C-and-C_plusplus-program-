#include<stdio.h>
int main()

{
    int term1,interval,numberofTerms;
    int lastTerm,sum;

    printf("Enter the first number");
    scanf("%d",&term1);

    printf("Enter the interval");
    scanf("%d",&interval);

    printf("Enter the number of terms");
    scanf("%d",&numberofTerms);

    lastTerm=(term1+numberofTerms)*interval;
    sum=((term1+lastTerm)*interval)/2;
    printf(" Their sum is:%d",sum);

    return 0;


}

