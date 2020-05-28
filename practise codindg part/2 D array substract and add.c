#include<stdio.h>
int main()
{

    int i,j,n,add,subs;
    int a[100],b[100];
    printf("Enter array element : ");
    scanf("%d",&n);
    printf("First array element is :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Second array element is : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);

    }
    printf("Two dimensional array add ");
    for(i=0;i<n;i++)
    {
        add=a[i]+b[i];
        printf("%d\n",add);
    }
    printf("Two dimensional array subs ");
    for(i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {
        subs=a[i]-b[i];
        printf("%d\n",subs);
        }
        else if(a[i]<b[i])
        {
            subs=b[i]-a[i];
            printf("%d\n",subs);
        }


    }




}
