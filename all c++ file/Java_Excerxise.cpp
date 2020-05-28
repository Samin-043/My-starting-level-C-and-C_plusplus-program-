
#include<stdio.h>
int evenOrOdd(int num1)
{

    if(num1%2==0)
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}
int main()
{
    int num;
    while((scanf("%d",&num))!=EOF)
        evenOrOdd(num);


}
