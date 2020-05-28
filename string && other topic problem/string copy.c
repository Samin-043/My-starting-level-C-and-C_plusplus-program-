#include<stdio.h>
int main()
{
    char i,s1[80],s2[80];

    printf("Enter string ");
    gets(s1);

    for(i=0;s1[i]!='\0';i++)
    {

        s2[i]=s1[i];

    }

    s2[i]='\0';

    printf("string s2 %s\n",s2);


}
