#include<stdio.h>
int main()
{
    int i,j,n,k,n1;

    printf("Enter number of rows : ");
    scanf("%d",&n);

    for(i=n; i>=1; i--)
    {

        for(j=n; j>i; j--)
        {
            printf(" ");
        }

        for(k=2*i-1; k>=1; k--)
        {
            printf("%d",k);

        }

        printf("\n");

    }
    printf("Enter number of rows : ");
    scanf("%d",&n1);


    for(i=n1;i>=1;i--)
    {

        for(j=n1;j>i;j--)
        {
            printf(" ");
        }

       for(k=2*i-1;k>=1;k--)
        {
            printf("*",k);

        }
        printf("\n");

    }
    for(i=n1-1;i<=n;i++)
    {

        for(j=n1-i;j>=1;j--)
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


