#include<stdio.h>
int findArraySum(int *p);
int main()
{
    //int sum=0;
    int arr[]={10,20,30,40,50};
    int sum=findArraySum(arr);
    printf("The sum is %d",sum);

}

int findArraySum(int *p)
{
    int sum=0;
    for(int i=0;i<`4;i++)
        sum+=p[i];

    return sum;
}
