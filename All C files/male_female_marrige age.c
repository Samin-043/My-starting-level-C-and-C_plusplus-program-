#include<stdio.h>
int main()
{

        char ch,x;
        int i;
        printf("Enter Gender and Age:");
        scanf("%c\t%d",&ch,&i);

        if(ch=='M'&&i>=21)
            printf("congrats! You are eligible\n");
        else if(ch=='F'&&i>=18)
            printf("congrats! You are eligible\n");
        else
            printf("You are not eligible\n");



}
