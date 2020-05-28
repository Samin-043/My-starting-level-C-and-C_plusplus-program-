#include<stdio.h>
struct example
{
    int num1;
    int num2;
} s[3];

void enter_value(struct num *sptr);
void print_value(struct num *sptr);

void enter_value(struct example *sptr)
{

    printf("Enter First Number : \n");
    scanf("%d",&sptr.num1);
    printf("Enter Second Number : \n");
    scanf("%d",&sptr.num2);
}

void print_value(struct example *sptr)
{

    printf("First Number : %d\n",sptr.num1);
    printf("Second Number : %d\n",sptr.num2);
}

void main()
{

    for(int i=0; i<3; i++)
    {

        void enter_value(&s[i])
    }
    for(int i=0; i<3; i++)
    {

       void print_value(&s[i]);
    }

}


