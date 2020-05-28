#include<stdio.h>

int main()
{
    int i,l=0,j,n=0,m;
    char str1[100],str3[50];
    char str2[100];
    gets(str1);
    gets(str2);
    for(i=0;str1[i]!='\0';i++)
    {
        l++;

    }
    for(j=0;str2[j]!='\0';j++)
    {
        n++;
        str1[l+j]=str2[j];
        m=l+n;

    }
    str1[l+j]='\0';
    printf("%d\n",m);

    printf("%s\n",str1);



}
