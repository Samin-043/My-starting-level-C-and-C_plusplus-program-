
#include<stdio.h>
void number(int num)
{

    if(num=='1')
        printf("One\n");
    else if(num=='2')
        printf("Two\n");
    else if(num=='3')
        printf("Three\n");
    else if(num=='4')
        printf("Four\n");
    else if(num=='5')
        printf("Five\n");
    else if(num=='6')
        printf("Six\n");
    else if(num=='7')
        printf("Seven\n");
    else if(num=='8')
        printf("Eight\n");
    else if(num=='9')
        printf("Nine\n");
    else
        printf("Other numbers\n");

}
int main()
{
    int num1;
    while((scanf("%d",&num1))!=EOF)

    number(num1);
    return 0;
}
