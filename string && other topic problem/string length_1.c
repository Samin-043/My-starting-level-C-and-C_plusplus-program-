#include<stdio.h>
#include<string.h>
int main()
{

    char s[1000],i;
    printf("Enter string ");
    for(i=0;i<999;i++)
        gets(s[i]);
    for(i=0;s[i]!='\0';i++)
    {

        printf("%s\n",i);
    }



}
