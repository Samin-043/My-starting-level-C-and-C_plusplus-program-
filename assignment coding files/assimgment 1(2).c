#include<stdio.h>
int main(void)
{
    int i,n,s1=0,s2=0;
    printf("The number of the term is= ");
    scanf("%d",i);

    while(n<=i)
    {
        n++;
        s1=((n+1)*(n+2))+s1;
    }
    for(n=1;n<=i;n++)
    {
        s2=((n+1)*(n+2))+s2;
    }
    if(s1==s2)
        printf("\n\n**The sum of %d term is %d\n",i,s1);
    else
        printf("Error");

    return 0;
}
