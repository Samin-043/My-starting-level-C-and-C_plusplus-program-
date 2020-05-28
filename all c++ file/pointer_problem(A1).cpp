#include<stdio.h>
int findSumOddAndMinusEven(int *arr,int n)
{
    int ans;
    int sum=0,sum1=0;
    printf("Array is :\n");
    for(int i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
            sum+=arr[i];
        else if(arr[i]%2==0)
            sum1+=arr[i];
    }
    ans=sum-sum1;
    //printf("End of total calculation result is : %d\n",ans=sum-sum1);
    return ans;

}

int main()
{
    int arr[100];
    int sizeOfArray;
    printf("Size of an array : ");
    scanf("%d",&sizeOfArray);
    //int result=findSumOddAndMinusEven(arr,sizeOfArray);
    printf("Result is %d\n",findSumOddAndMinusEven(arr,sizeOfArray));
    return 0;
}
