
#include<stdio.h>
int main()
{
    int a,b,i,j,k,count=0,m=0,c;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        scanf("%d%d",&b,&c);
        for(j=b; j<=c; j++)
        {
            for(k=1;k<=c;k++)
            {
                if(j%k==0 && k%2!=0)
                {
                        count++;
                }
            }

            if(count%2!=0)
                    m++;
                count=0;
        }
        printf("%d\n",m);
        m=0;

    }
    return 0;
}
