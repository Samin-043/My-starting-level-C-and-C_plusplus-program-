#include<stdio.h>

void passing_data(int ,int);

int p=30;
int q=20;

int main()
{

    int a=20;
    int b=10;


    printf("Firstly The value of A is : %d and B is : %d\n",a,b);
    printf("The value of p is : %d\n",p);
    printf("The value of q is : %d\n",q);
    p++;
    q++;
    passing_data(a,b);
     printf("Lastly The value of A is : %d and B is : %d\n",a,b);



}


void passing_data(int x,int y){

     printf("The value of P is %d\n",p+q);
    printf("Before update value of X is : %d and value of Y is %d\n",x,y);
    x=120;
     y=130;
     printf("After update value of X is : %d and value of Y is %d\n",x,y);



}
