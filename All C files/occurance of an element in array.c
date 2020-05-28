#include<stdio.h>
int main()
{

    int i,n,b,t=0;
    int a[100];

    scanf("%d",&n);
    for(i=0; i<n; i++)
    {

        printf("Enter the element of an array : ");
        scanf("%d",&a[i]);
    }
    printf("array elements are : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nElement to find occurence : ");
    scanf("%d",&b);

    for(i=0; i<n; i++)
        if(a[i]==b)
        {
            t++;
        }
    printf("\noccurence of %d is %d times\n",b,t);



}
