#include<stdio.h>
int main(void)
{
    int i,j,n,k;
    printf("Number of rows : ");
    scanf("%d",&n);

   for(i=n;i>=1;i--)
    {

        for(j=n;j>i;j--)
        {
            printf(" ");
        }

       for(k=2*i-1;k>=1;k--)
        {
            printf("*",k);

        }
        printf("\n");

    }
    for(i=n-1;i<=n;i++)
    {

        for(j=n-i;j>=1;j--)
        {

            printf(" ");

        }
        for(k=2*i-1;k>=1;k--)
        {

            printf("*");
        }
        printf("\n");
    }

}
