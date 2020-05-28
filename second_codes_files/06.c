#include<stdio.h>
int main(void)

{
    int n,i,answer,prime=1;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%2=0)
           prime=0;

    }
    if(answer==1)
        printf("prime number");
    else
        printf("Not prime");


    return 0;
}
