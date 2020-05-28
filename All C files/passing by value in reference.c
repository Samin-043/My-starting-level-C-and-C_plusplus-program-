
#include<stdio.h>
void function1(int *,int *);

int main()
{
    int a=50;
    int b=100;
    printf("Before change the value a=%d b=%d\n",a,b);
    function1(&a,&b);
    printf("A=%u B=%u\n",&a,&b);
    printf("After change the value a=%d b=%d\n",a,b);



    //getch();
    return 0;
}

void function1(int *p,int *q){

    printf("%d %d\n",*p,*q);
    printf("P=%u Q=%u\n",&p,&q);
    // printf("A=%u B=%u\n",*(&p),*(&q));

    *p=5;
    *q=10;

}

