#include<stdio.h>
int main()
{
    int a,b,i,s=0;
    scanf("%d%d",&a,&b);
    if(b>0){
    for(i=b;i<=a;i++)
    {
            printf("%d ",i);
            s=s+i;

    }
        printf("Sum=%d\n",s);
}
else

    printf("\n");
}



