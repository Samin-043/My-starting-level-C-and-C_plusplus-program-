#include<stdio.h>
int main(void)
{
    char ch,ch1;
    printf("Enter a Letter:\n");
    scanf("%c",&ch);
    if(ch1=(ch+32))
       {
           if(ch1>='a'&&ch1<='z')
               printf("opposite letter is:\n%c",ch1);
           else
               printf("No letter");

       }
    return 0;
}









