#include<stdio.h>

int main()

{
    int i,j,n,k;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {

        for(j=n;j>i;j--)
        {
            printf(" ");
        }

       for(k=2*i;k>=1;k--)
        {
            printf("%d",k);

        }

        printf("\n");



    }


}


