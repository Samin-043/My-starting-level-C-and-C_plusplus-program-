#include<stdio.h>
int main()
{
    int i,j,flag,value;

    int a[]={1,2,4,5,6};
    int b[]={3,5,7,9,11};
    for(i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            if(b[i]==a[j])
            {
                flag=1;
            }
        if(flag==1)
            {
                value=b[i];
            }


    }
    printf("%d\n",value);

}
