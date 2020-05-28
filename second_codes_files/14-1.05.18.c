#include<stdio.h>
int main(void)
{
    char c1;
    printf("Enter Character\n");
    scanf("%c",&c1);

    if
        ((c1>='A')&&(c1<='Z'))
    printf("An upper case letter\n");
    else if
        (c1>='a'&&c1<='z')
    printf("An lower case letter\n");
    else if
         (c1=='n')
    printf("A digit\n");
    else
    printf("I don't know\n");

    return 0;

}

