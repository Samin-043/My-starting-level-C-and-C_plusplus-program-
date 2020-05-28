#include<stdio.h>
int main()
{
    int a[100];
    int i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            a[i]=0;
        }
        else if(i==1)
        {
            a[i]=1;
        }
        else if(i>=2)
        {
            a[i]=a[i-2]+a[i-1];
        }
        printf("%d ",a[i]);
    }

    return 0;

}
