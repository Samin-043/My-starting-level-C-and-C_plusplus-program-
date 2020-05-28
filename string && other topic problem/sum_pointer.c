#include<stdio.h>
#include<string.h>
int main()
{
    int arr[10];
    char name[100];
    int sum=0;

    for(int i=0;i<10;i++)
    {

        scanf("%d",&arr[i]);
        //*ptr[i]=&arr[i];
        //sum+=*ptr[i];
        //printf("%s\n",*(&name[i]));
        printf("%d\n",*(&arr[i]));
        sum+=*(&arr[i]);
        printf("%d\n",sum);

    }
    printf("\n\nTotal Sum : %d\n",sum);



    return 0;
}
