#include<stdio.h>
void function(int arr[]);
int main()
{
    int arr[100],i;

    for(int i=0;i<5;i++)
    {

        scanf("%d",&arr[i]);

    }
    fuction(arr);

    for(int i=0;i<5;i++)
    {
        printf("array elements are %d : %d",i,arr[i+1]);
        //printf("array elements %d : %d\n",i+1,*(&arr[i]));
    }

    return 0;
}
void fuction(int arr[])
{
    int a=5;

    for(int i=0;i<5;i++)
    {
        //arr[i]=arr[i]+5;
        if(arr[i]==a)
        {
           i=i+1;
        }

    }

}
