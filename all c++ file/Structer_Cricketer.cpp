#include<stdio.h>
struct Cricketer
{
    char name[20];
    char country[10];
    int runs;
    int wickets;
    double height;
    int matches;
    Cricketer()
    {

    }



};
int find_Wicket_Difference(Cricketer *arr,int n)
    {
        int a,b;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                b=arr[i].wickets;
                a=arr[i].wickets;
            }
            else if(arr[i].wickets>a)
            {
                a=arr[i].wickets;
                printf("Wicket : %d\n",arr[i].wickets);
                printf("%s\n",arr[i].country);
                break;
            }
            else if(arr[i].wickets<b)
            {
                b=arr[i].wickets;
            }

        }
        return a-b;
    }
    //return a-b;



int main()
{
    Cricketer C[10];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {

        scanf("%s %s %d %d",C[i].name,C[i].country,&C[i].runs,&C[i].wickets,&C[i].matches);
        scanf("%lf",&C[i].height);

    }
    int result=find_Wicket_Difference(C,n);
    printf("Wicket difference is : %d\n",result);


    return 0;
}
