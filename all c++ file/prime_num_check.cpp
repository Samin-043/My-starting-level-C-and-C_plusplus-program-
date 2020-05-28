#include<stdio.h>
int main()
{
    int num=15;

    int flag;

    for(int i=1;i<=num;i++)
    {
        flag=0;

        for(int j=2;j<i;j++)
        {

            if(i%j==0)
            {
                if(i/j==2||i/j==3||i/j==5)


                    flag=1;
                    break;
            }
        }
            if(flag==1)
                printf("%d \n",i);


        }



    return 0;
}
