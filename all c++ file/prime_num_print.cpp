#include<stdio.h>

int main()

{

    int n=50000,num;

    int flag;

    bool time;

    for(int i=1;i<=n;i++)
    {
        //flag=1;
        time=true;


        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                //flag=0;
                time=false;

                break;

            }


        }

        if(time==true)                          ///if(flag==1)////
        {

            printf("Prime is : ");

            printf("%d \n",i);


        }

        else
        {

            printf("Not Prime is : ");

            printf("%d \n",i);


        }

    }

}


