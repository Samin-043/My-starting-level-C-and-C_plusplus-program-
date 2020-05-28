#include<stdio.h>
#include<string.h>
int main()
{
    int test,i;
    char str[10000];
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {

       gets(str);


    }
    for(i=0;str[i]!='\0';i++)
    {

        printf("%s\n",str);
    }


}
