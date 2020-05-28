#include<stdio.h>
int findLargestElementOfArray(int *a,int n)
{
    int highest_value,i,m;

        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(i==0)
                highest_value=a[i];
            else if(a[i]>highest_value)
                highest_value=a[i];
        }

    return highest_value;
}

int main()
{
    int arr[100],a;
    scanf("%d",&a);
    int max_value=findLargestElementOfArray(arr,a);
    printf("\nMaximum Value is %d\n",max_value);

    return 0;
}
