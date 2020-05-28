#include<stdio.h>
int main(void)
{
    int i,j,n,k;
    printf("Number of rows : ");
    scanf("%d",&n);

   for(i=n;i>=1;i--)
    {

        for(j=i;j<n;j++)
        {

            printf(" ");


        }

       for(k=1;k<=2*i-1;k++)
        {

            printf("*",k);


        }
        printf("\n");



    }
}
