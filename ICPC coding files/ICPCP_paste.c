#include<stdio.h>
int main()
{
    int a,b[1000],i,j,c,d[1000],x;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d",&b[i]);
    }
    scanf("%d",&c);
    for(j=0; j<c; j++)
    {
        scanf("%d",&d[j]);
        for(i=0; i<a; i++)
    {
        if(b[i]%d[j]==0)
        {
            x=1;

        }
        else
        {
            x=0;
        }
    }
    if(x==0)
    {
        printf("Y\n");
    }
    else if(x==1)
    {
        printf("N\n");
    }
    }
    }

