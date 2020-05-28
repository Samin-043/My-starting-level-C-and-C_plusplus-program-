#include <stdio.h>

int main(void)

{
    int n,c,s1,s2;
    printf("Enter the term of the series:\n\n=> ");
    scanf("%d",&c);

    s1=0;
    s2=0;
    n=1;

    while(n<=c)
    {
        s1=((n+1)*(n+2))+s1;
        n++;
    }
    for(n=1;n<=c;n++)
    {
        s2=((n+1)*(n+2))+s2;
    }
    if(s1==s2)
        printf(" The sum of %d terms is %d\n\n\n",c,s1);
    else
        printf("!!! Error !!!\a\a\a\n\n\n");

return 0;
}

