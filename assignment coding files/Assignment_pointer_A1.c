#include<stdio.h>
#include<string.h>
char kReverseString(char *s,int k)
{
    int len=0,j;
    //gets(s);
    char ch[100];
    for(int i=0;s[i]!='\0';i++)
    {
        len++;
        if(k<=len)
        {
            for(j=0;j<=k;k++)
                printf("%s",s);

        }

    }
    return s;



}

int main()
{
    char ch[100];
    int k;
    gets(ch);
    scanf("%d",&k);
    char a=kReverseString(ch,k);

    return 0;
}
