#include<stdio.h>
int main()
/*{
    int i;
    int a[100];
    for(i=1;i<=20;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)                          ///"%" modulus///
        {
            0
        }
        else if((i%2!=0)&&(a[i]%2==0))
        {
                printf("%d : %d\n",i,a[i]);
            //m=a[i];
        }
            //printf("%d : %d \n",i,a[i]);

    }


    return 0;
}*/
/*{

    int i,m,n,sum=0,j;
    int a[100000];
    for(i=0;i<5;i++)
    {
        scanf("%d %d",&m,&n);
        //m=3;
        //n=6;
        for(j=m;j<n;j++)
        {
            scanf("%d",&a[j]);
            //printf("%d\n",a[j]);
            sum+=a[j];
        }
        printf("%d\n",sum);


    }

}*/


{
    int a[10005];
    int sum[1000];
    int i;

    for(i=1;i<=10;i++)
    {
        scanf("%d",&a[i]);
        if(i==2)
            sum[i]=a[i];
        else if(i>2)
            sum[i]=sum[i-1]+a[i];


          printf("%d\n",sum[i]);
    }



    return 0;
}






