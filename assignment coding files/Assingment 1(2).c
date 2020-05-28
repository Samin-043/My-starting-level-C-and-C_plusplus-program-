#include<stdio.h>
int main(void)
{
    int c,n,s1,s2;
    printf("Enter the term of the series:\n\n=>");
    scanf("%d",&c);
    s1=0;
    s2=0;
    n=1;
     while(n<=c)
    {
        s2=((n+1)*(n+2))+s2;
        n++;\
    }
     for(n=1;n<=c;n++)
    {

        s1=((n+1)*(n+2))+s1;
    }
    if(s1==s2)
        printf("\n\n**The sum of %d term is %d\n\n\n",c,s2);
    else
        printf("\n\n!!!Error\a\a\a\n\n\n");


    return 0;

}
