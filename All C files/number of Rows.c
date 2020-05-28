#include<stdio.h>


int main()

{

    int i,j,n;


    scanf("%d",&n);
    for(i=n;i<0;i=i-2)
    {

        for(j=1;j<i;j=j-2)
            printf("*\n",j);

    }
}
