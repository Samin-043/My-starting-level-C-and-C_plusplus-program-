#include<stdio.h>
#define totalBricks 10*5

/*struct brick
{
    int x;
    int y;
    int dx=100;
    int dy=10;
    bool show=true

    X()
    {

    }

};
*/
int main()
{
    int b[totalBricks];

     int

    int sum_x=100;
    int sum_y=450;

    for(int i=0;i<totalBricks;i++)
    {
        b[i].x=sum_x;
        b[i].y=sum_y;

        printf("brick number : %d brick_x : %d brick_y : %d\n",i+1,b[i].x,b[i].y);

        sum_x+=100;

        if(sum_x>1000)
        {

            sum_x=100;
            sum_y+=20;

        }


    }

    return 0;
}
