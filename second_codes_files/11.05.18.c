#include<stdio.h>
#include<math.h>
float sum_xy(float x,float y);
double prdct_xy(float x,float y);
int main(void)
{
    float n1,n2,n3;
    double n4,n5;

    printf("\nTwo decimal fractional numbers\n");
    scanf("%f,%f",&n1,&n2);

    n3=sum_xy(n1,n2);
    n4=prdct_xy(n1,n2);
    n5=sqrt(n4);

    printf("\n1st  function returns %f",n3);
    printf("\n2nd  function returns %f",n4);
    printf("\nThe sqrt root of %f is %f\n",n4,n5);

    return 0;

}
float sum_xy(float x,float y)
{
    float z;
    z=x+y;
    return z;
}
double prdct_xy(float x,float y)
{
    double z;
    z=x*y;
    return z;

}

