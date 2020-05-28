#include<stdio.h>
int main()
{
    int i,j,value;
    int a[100],b[100];
    printf("First Array : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
     printf("Second Array : \n");
     for(j=0;j<5;j++)
    {
        scanf("%d",&b[j]);

    }
    while(i<5&&j<5)
    {
        if(a[i]>b[j])
        {
            j++;

        }
        else if(a[i]<b[j])
        {
            i++;
        }
        else
        {
            value=a[i];
            return value;
        }

    }
    printf("%d\n",value);

}
