#include<stdio.h>

void printX();

int x=15;

int main(void)
{
    int x=5;
    {
        printf("x : %d\n",x);
        int x=10;
        printf("x : %d\n",x);
    }
    printf("x : %d\n",x);
    printX();
    return 0;
}

void printX()
{
    printf("x : %d", x);
}

