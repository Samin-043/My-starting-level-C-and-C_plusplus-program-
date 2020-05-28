#include<stdio.h>
int main()
{

    int i,a[100],n,max;
    printf("how long array element : ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }

    printf("all array elements are : ");
      for(i=0;i<n;i++)
        printf("%d\t",a[i]);

      for(i=0;i<n;i++)
      {
         if(i==0)
            max=a[i];
        else if(a[i]>max)
            max=a[i];

      }

    printf("\nmaximum element is %d\n",max);


}
