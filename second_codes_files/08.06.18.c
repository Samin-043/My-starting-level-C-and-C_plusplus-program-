#include<stdio.h>
int main(void)
{
    int a,b,c,sum;
    while(1){
        scanf("%d%d%d",&a,&b,&c);
        if(a==-1&&b==-1&&c==-1)
            break;
        printf("%d",sum=a+b+c);
    }

    return 0;
}
