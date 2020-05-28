#include<stdio.h>
int main(void)
{
    float x,y,z;
    printf("Enter two angles of triangle:\n");
    scanf("%f%f",&x,&y);
    printf("Third angle is:\n%f",z=180-(x+y));
    if(z==90)
        printf("\nRight angle");
    else
        printf("\nNot");

    return 0;
}
