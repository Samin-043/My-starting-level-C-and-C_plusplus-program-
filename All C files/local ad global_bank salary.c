#include<stdio.h>
void f1(int x);
void f2(float y,float z);

int main()
{

    int bs;
    float hr,ma;
    printf("Basic Salary : ");
    scanf("%d ",&bs);

    printf("House rent : ");
    scanf("%f",&hr);

    printf("Basic salary : %d \n",bs);
    printf("house rent : %.2f \n",bs*(hr/100.00));
    printf("medical  allowances : %.2f\n",bs-(bs*(hr/100.00)));



}


void f1(int x)
{
    x=100;
    printf("%d",x);
}

void f2(float y,float z)
{

    y=200;
    z=5;
    printf("%f %f ",y,z);

}
