#include<stdio.h>
int getmaximumpoint(int *a,int m)
{
    int i,sum=0;
    for(i=0;i<m;i++)
    {
        if(a[i]<0)
            break;
        sum+=a[i];
    }
    printf("Solder achievement is: %d\n",sum);

}
int main()
{
    int n;
    scanf("%d",&n);

    int a[100];
    for(int i=0;i<n;i++)
    {

        scanf("%d",&a[i]);

    }

    int result=getmaximumpoint(a,n);


    return 0;
}
